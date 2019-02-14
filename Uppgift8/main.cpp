#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {

int age_of_car; 
int year; 

cout << "årsmodell på bilen" << endl;
cin >> age_of_car; 

cout << " aktuellt år" << endl;
cin >> year;

year = year - age_of_car;

if (year <= 5) { 
cout << "helförsäkring";
}

else if ( year > 25 ){

cout << "veteran försäkring";

}

else if ( year > 5 ){

cout << "Halvförsäkring";

}
	return 0;
}
