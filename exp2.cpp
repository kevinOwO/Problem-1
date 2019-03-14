
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{ 
	 float mass;
	 float density;

	 cout << "Enter Mass (in grams):" << endl;
	 cin >> mass;
	 cout << "Enter Density (grams per cubic cm):" << endl;
	 cin >> density;
     cout << endl;
	 cout << "Volume= " << mass / density << endl;

	 _getch();
	 return 0;
}