#include <iostream>
#include <string>
#include <sstream>
// #include <cstdio>

using namespace std;

// #define MAX_STRING_LENGTH 865

// char *testData;
// char serialNumber;

// void initCharArray(string str, char list[], int listSize) {
//     cout << strlen(list);

//     for(int i = 0;i < listSize;i++) {
//         list[i] = str.at(i);
//     }
// }

int main() {

    // testData = new char[MAX_STRING_LENGTH];

    // string testString = "/ ISk5\2MT382-1000\n\n1-3:0.2.8(40)\n0-0:1.0.0(101209113020W)\n0-0:96.1.1(4B384547303034303436333935353037)\n1-0:1.8.1(123456.789*kWh)\n1-0:1.8.2(123456.789*kWh)\n1-0:2.8.1(123456.789*kWh)\n1-0:2.8.2(123456.789*kWh)\n0-0:96.14.0(0002)\n1-0:1.7.0(01.193*kW)\n1-0:2.7.0(00.000*kW)\n0-0:17.0.0(016.1*kW)\n0-0:96.3.10(1)\n0-0:96.7.21(00004)\n0-0:96.7.9(00002)\n1-0:99:97.0(2)(0:96.7.19)(101208152415W)(0000000240*s)(101208151004W)(00000000301*s)\n1-0:32.32.0(00002)\n1-0:52.32.0(00001)\n1-0:72:32.0(00000)\n1-0:32.36.0(00000)\n1-0:52.36.0(00003)\n1-0:72.36.0(00000)\n0-0:96.13.1(3031203631203831)\n0-0:96.13.0(303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B\n3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F)\n0-1:24.1.0(03)\n0-1:96.1.0(3232323241424344313233343536373839)\n0-1:24.2.1(101209110000W)(12785.123*m3)\n0-1:24.4.0(1)\n!522B";

    // initCharArray(testString, testData, MAX_STRING_LENGTH);

    // cout << testData << endl;

    // int returnedValue = sscanf(testData, "0-0:96.1.1(%s", &serialNumber);

    // cout << "Returned value by sscanf: " << returnedValue << endl;
    // cout << "Serial number: " << serialNumber << endl;

    // string str = "0-0:96.1.1(4B384547303034303436333935353037)";

    // char serNumber;

    // int sReturnedValue = sscanf(str.c_str(), "0-0:96.1.1(%c", &serNumber);

    // cout << "Returned value by sscanf: " << sReturnedValue << endl;
    // cout << serNumber << endl;

    // // stringstream testStringStream = "/ ISk5\2MT382-1000\n\n1-3:0.2.8(40)\n0-0:1.0.0(101209113020W)\n0-0:96.1.1(4B384547303034303436333935353037)\n1-0:1.8.1(123456.789*kWh)\n1-0:1.8.2(123456.789*kWh)\n1-0:2.8.1(123456.789*kWh)\n1-0:2.8.2(123456.789*kWh)\n0-0:96.14.0(0002)\n1-0:1.7.0(01.193*kW)\n1-0:2.7.0(00.000*kW)\n0-0:17.0.0(016.1*kW)\n0-0:96.3.10(1)\n0-0:96.7.21(00004)\n0-0:96.7.9(00002)\n1-0:99:97.0(2)(0:96.7.19)(101208152415W)(0000000240*s)(101208151004W)(00000000301*s)\n1-0:32.32.0(00002)\n1-0:52.32.0(00001)\n1-0:72:32.0(00000)\n1-0:32.36.0(00000)\n1-0:52.36.0(00003)\n1-0:72.36.0(00000)\n0-0:96.13.1(3031203631203831)\n0-0:96.13.0(303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B\n3C3D3E3F303132333435363738393A3B3C3D3E3F303132333435363738393A3B3C3D3E3F)\n0-1:24.1.0(03)\n0-1:96.1.0(3232323241424344313233343536373839)\n0-1:24.2.1(101209110000W)(12785.123*m3)\n0-1:24.4.0(1)\n!522B";


    string s("{10}{20}Hello World!");
    stringstream iss(s);

    string a;
    int x, y;
    iss.ignore(1, '{');
    iss >> x;
    iss.ignore(1, '}');
    iss.ignore(1, '{');
    iss >> y;
    iss.ignore(1, '}');
    getline(iss, a);

    cout << a << endl << x << endl << y << endl << endl;

    size_t foundValue = s.find("Hello");

    cout << "Found value: " << foundValue << endl << endl;

    string s2("/ISk5\2MT382-1000\n0-0:96.1.1(4B384547303034303436333935353037)");

    foundValue = s2.find("0-0:96.1.1(");

    cout << "Found value: " << foundValue << endl;

    string serialNumber = s2.substr(foundValue+11, 32);

    cout << "Serial number: " << serialNumber << endl;

    return 0;
}

// Maybe use a stringstream??