#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int miles_now;
	int miles_year_ago;
	float miles;
	float antal_liter;
	float consumption;
	
	cout << "hur många mil idag";
	cin >> miles_now;
	cout << "ett år sen";
	cin >> miles_year_ago;
	cout << "hur många liter har förbrukats" << endl;
	cin >> antal_liter;
	
	
	
	
	
	miles = miles_now - miles_year_ago;
	
	consumption = antal_liter / miles; 
	
	cout << "antal körda mil" << miles << endl;
	cout << "Antal liter" << antal_liter << endl; 
	cout << "förbrukning per mil" << consumption << endl;
	
	
	
	
	cout << miles;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

