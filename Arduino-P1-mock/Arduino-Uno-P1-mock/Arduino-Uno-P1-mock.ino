// NOTE: This sketch is meant for the Arduino Uno

#define LED 13

void sendP1Data() {      
  Serial.println("/ISk5\2MT382-1000");
  Serial.println("1-3:0.2.8(40)");
  Serial.println("0-0:1.0.0(101209113020W)");
  Serial.println("0-0:96.1.1(4B384547303034303436333935353037)");
  Serial.println("1-0:1.8.1(123456.789*kWh)");
  Serial.println("1-0:1.8.2(123456.789*kWh)");
  Serial.println("1-0:2.8.1(123456.789*kWh)");
  Serial.println("1-0:2.8.2(123456.789*kWh)");
  Serial.println("0-0:96.14.0(0002)");
  Serial.println("1-0:1.7.0(01.193*kW)");
  Serial.println("1-0:2.7.0(00.000*kW)");
  Serial.println("0-0:17.0.0(016.1*kW)");
  Serial.println("0-0:96.3.10(1)");
  Serial.println("0-0:96.7.21(00004)");
  Serial.println("0-0:96.7.9(00002)");
  Serial.println("1-0:99:97.0(2)(0:96.7.19)(101208152415W)(0000000240*s)(101208151004W)(00000000301*s)");
  Serial.println("1-0:32.32.0(00002)");
  Serial.println("1-0:52.32.0(00001)");
  Serial.println("1-0:72:32.0(00000)");
  Serial.println("1-0:32.36.0(00000)");
  Serial.println("1-0:52.36.0(00003)");
  Serial.println("1-0:72.36.0(00000)");
  Serial.println("0-0:96.13.1(3031203631203831)");
  Serial.println("0-0:96.13.0(303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B");
  Serial.println("3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F)");
  Serial.println("0-1:24.1.0(03)");
  Serial.println("0-1:96.1.0(3232323241424344313233343536373839)");
  Serial.println("0-1:24.2.1(101209110000W)(12785.123*m3)");
  Serial.println("0-1:24.4.0(1)");
  Serial.println("//!522B");
}

void setup() {
  // Open serial port
  Serial.begin(9600);
  
  // Initialize LED pin as output
  pinMode(LED, OUTPUT);
}

void loop() {
  delay(500);
  Serial.println("Hello World");
  sendP1Data();
  digitalWrite(LED, HIGH);
  delay(500);
  digitalWrite(LED, LOW);
}
