#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main() {

 float a; 
 float b;
 float c;
 int raknesatt; 
 
 cout << " + = a , - = 2 , * = 3 , / = 4 " << endl;
 cin >> raknesatt; 
 cout << " V�lj tal" << endl;
 cin >> a;
 cout << " v�lj annat tal" << endl;
 cin >> b;
 
 if (raknesatt == 1){
 	c=a+b;
 	cout <<"Svar: " <<c<<endl;
 }
 else if (raknesatt == 2) {
 	c=a-b;
 	cout<<"Svar: "<<c<<endl;
 }
 else if(raknesatt == 3) {
 	c=a*b;
 	cout<<"Svar: "<< c << endl;
 }
else if(raknesatt == 4){
	c=a/b;
	cout<<"Svar: "<<c<<endl;
}

	return 0;
}
