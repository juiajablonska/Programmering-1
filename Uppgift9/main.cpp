#include <iostream>

using namespace std;

int main() {

int heltala;
int heltalb;
int heltalc;

cout << "skriv ett heltal"; 
cin >> heltala;

cout << "skriv ett till heltal";
cin >> heltalb;

cout << "skriv ett tredje heltal";
cin >> heltalc;

if(heltala >= heltalb and heltala >= heltalc)
cout << "Största talet:" << heltala;	

if(heltalb >= heltala and heltalb>= heltalc)
cout << "Största talet"<< heltalb;

if(heltalc >= heltala and heltalc>=heltalb)
cout << "största talet:" << heltalc;


return 0; 
}  
