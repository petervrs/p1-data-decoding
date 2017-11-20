//#include <iostream>
//#include <string>
//#include <sstream>

//using namespace std;

String testString = "/ ISk5\2MT382-1000\n\n1-3:0.2.8(40)\n0-0:1.0.0(101209113020W)\n0-0:96.1.1(4B384547303034303436333935353037)\n1-0:1.8.1(123456.789*kWh)\n1-0:1.8.2(123456.789*kWh)\n1-0:2.8.1(123456.789*kWh)\n1-0:2.8.2(123456.789*kWh)\n0-0:96.14.0(0002)\n1-0:1.7.0(01.193*kW)\n1-0:2.7.0(00.000*kW)\n0-0:17.0.0(016.1*kW)\n0-0:96.3.10(1)\n0-0:96.7.21(00004)\n0-0:96.7.9(00002)\n1-0:99:97.0(2)(0:96.7.19)(101208152415W)(0000000240*s)(101208151004W)(00000000301*s)\n1-0:32.32.0(00002)\n1-0:52.32.0(00001)\n1-0:72:32.0(00000)\n1-0:32.36.0(00000)\n1-0:52.36.0(00003)\n1-0:72.36.0(00000)\n0-0:96.13.1(3031203631203831)\n0-0:96.13.0(303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B\n3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F)\n0-1:24.1.0(03)\n0-1:96.1.0(3232323241424344313233343536373839)\n0-1:24.2.1(101209110000W)(12785.123*m3)\n0-1:24.4.0(1)\n!522B";
String input;
long interval = 5000;
long lastTime = 0;
long charPosition = 0;

String mEVLT = "0";                     // Meter reading Electrics - consumption low tariff
String mEVHT = "0";                     // Meter reading Electrics - consumption high tariff
String mEOLT = "0";                     // Meter reading Electrics - return low tariff
String mEOHT = "0";                     // Meter reading Electrics - return high tariff
String mEAL = "0";                      // Meter reading Electrics - Actual consumption low tariff
String mEAH = "0";                      // Meter reading Electrics - Actual consumption high tariff
String mEAV = "0";                      // Meter reading Electrics - Actual consumption
String mEAT = "0";                      // Meter reading Electrics - Actual redeliver                // added WSL
String mG = "0";                        // Meter reading Gas

int findText(String needle, String haystack) {
 int foundpos = -1;
 for (int i = 0; i <= haystack.length() - needle.length(); i++) {
   if (haystack.substring(i,needle.length()+i) == needle) {
     foundpos = i;
   }
 }
 return foundpos;
}

String extractDataFromTelegram(String dataID, long dataIDLength, long dataLength, String *telegram) {
  long dataIDPos = findText(dataID, *telegram);
  String data = "";
  if (dataIDPos != -1) {
    long startPos = dataIDPos+dataIDLength;
    long endPos = startPos + dataLength;
    data = telegram->substring(startPos, endPos);
  }
  return data;
}

void setup() {
  
  Serial.begin(115200);

  Serial.readString();
  
}

void loop() {

  if (millis() - lastTime > interval) {
    lastTime = millis();
    Serial.printf("Last time: %d\n", lastTime);
    Serial.println(testString);
    charPosition = findText("0-0:1.0.0(", testString);
    Serial.printf("Position of 0-0:1.0.0: %d\n", charPosition);
    Serial.println(testString.substring(charPosition + 10, charPosition + 23));
    Serial.print("\n\n");
    Serial.println(extractDataFromTelegram("0-0:1.0.0(", 10, 13, &testString));
  }
}
