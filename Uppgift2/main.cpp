#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int miles_now;
	int miles_year_ago;
	float miles;
	float antal_liter;
	float consumption;
	
	cout << "hur m�nga mil idag";
	cin >> miles_now;
	cout << "ett �r sen";
	cin >> miles_year_ago;
	cout << "hur m�nga liter har f�rbrukats" << endl;
	cin >> antal_liter;
	
	
	
	
	
	miles = miles_now - miles_year_ago;
	
	consumption = antal_liter / miles; 
	
	cout << "antal k�rda mil" << miles << endl;
	cout << "Antal liter" << antal_liter << endl; 
	cout << "f�rbrukning per mil" << consumption << endl;
	
	
	
	
	cout << miles;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

