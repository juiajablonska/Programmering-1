#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {

int age_of_car; 
int year; 

cout << "�rsmodell p� bilen" << endl;
cin >> age_of_car; 

cout << " aktuellt �r" << endl;
cin >> year;

year = year - age_of_car;

if (year <= 5) { 
cout << "helf�rs�kring";
}

else if ( year > 25 ){

cout << "veteran f�rs�kring";

}

else if ( year > 5 ){

cout << "Halvf�rs�kring";

}
	return 0;
}
