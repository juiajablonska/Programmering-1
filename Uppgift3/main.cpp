#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
float vikt1;
float vikt2;
float kilopris1;
float kilopris2;
float pris_vara1;
float pris_vara2; 
float totalt_pris;
float totalt_pris_moms;


cout << "Vikt på vara 1" << endl;
cin >> vikt1; 
cout << "Kilopris på vara 1"<< endl;
cin >> kilopris1;

cout << "vikt på vara 2" << endl;
cin >> vikt2;
cout << "Kilopris på vara 2"<< endl;
cin >> kilopris2; 



pris_vara1 =  vikt1 * kilopris1;

pris_vara2 = vikt2 * kilopris2; 

totalt_pris = pris_vara1 + pris_vara2;

totalt_pris_moms = totalt_pris * 1,12; 


cout << "Pris på vara 1" << pris_vara1 << endl;

cout << "pris på vara 2" << pris_vara2 << endl;
 
cout << "totalt pris" <<  totalt_pris <<endl;

cout << " totalt pris med moms" << totalt_pris_moms << endl;























	return 0;
}
