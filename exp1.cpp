#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{ 
	int box; box = 250;
	int sideline; sideline = 100;
	int prem; prem = 50;
	int Genad; Genad = 25;
	int boxp;
	int sidelinep;
	int premp;
	int Genadp;
	int box2;
	int sideline2;
	int prem2;
	int Genad2;
	int box3;
	int sideline3;
	int prem3;
	int Genad3;
	int box4;
	int sideline4;
	int prem4;
	int Genad4;
cout << "Game 1:" <<endl;
cout << "Ticket Price" << "\t \t"   << endl;
cout << "Box = 250" <<  endl; 
cout << "Sideline = 100" <<    endl;
cout << "Premium = 50"  <<  endl;
cout << "Gen Ad = 25" <<   endl;
cout << "\r" << endl;
cout << "Number of Tickets Sold " << endl;
cout << "Box Tickets Sold:" << "\t";
cin >> boxp;
cout << "Sideline Tickets Sold:" << "\t";
cin >> sidelinep;
cout << "Premium Tickets Sold:" << "\t";
cin >> premp;
cout << "GenAd Tickets Sold:" << "\t";
cin >> Genadp;
cout << "Box Tickets Sold =" << box * boxp <<endl;
cout << "Sideline Tickets Sold =" <<sideline * sidelinep <<endl;
cout << "Premium Tickets Sold =" << prem * premp <<endl;
cout << "GenAd Tickets Sold =" <<Genad * Genadp <<endl;
cout <<endl;
cout <<"Game 2:" <<endl;
cout << "Box Tickets Sold:" << "\t";
cin >> box2;
cout << "Sideline Tickets Sold:" << "\t";
cin >> sideline2;
cout << "Premium Tickets Sold:" << "\t";
cin >> prem2;
cout << "GenAd Tickets Sold:" << "\t";
cin >> Genad2;
cout << "Box Tickets Sold =" << box * box2 <<endl;
cout << "Sideline Tickets Sold =" <<sideline * sideline2 <<endl;
cout << "Premium Tickets Sold =" << prem * prem2 <<endl;
cout << "GenAd Tickets Sold =" <<Genad * Genad2 <<endl;
cout << endl;
cout <<"Game 3:" <<endl;
cout << "Box Tickets Sold" << "\t";
cin >> box3;
cout << "Sideline Tickets Sold:" << "\t";
cin >> sideline3;
cout << "Premium Tickets Sold:" << "\t";
cin >> prem3;
cout << "GenAd Tickets Sold:" << "\t";
cin >> Genad3;
cout << "Box Tickets Sold =" << box * box3 <<endl;
cout << "Sideline Tickets Sold =" <<sideline * sideline3 <<endl;
cout << "Premium Tickets Sold =" << prem * prem3 <<endl;
cout << "GenAd Tickets Sold =" <<Genad * Genad3 <<endl;
cout <<endl;
cout <<"Game 4:" <<endl;
cout << "Box Tickets Sold" <<"\t";
cin >> box4;
cout << "Sideline Tickets Sold:" << "\t";
cin >> sideline4;
cout << "Premium Tickets Sold:" << "\t";
cin >> prem4;
cout << "GenAd Tickets Sold:" << "\t";
cin >> Genad4;
cout << "Box Tickets Sold =" << box * box4 <<endl;
cout << "Sideline Tickets Sold =" <<sideline * sideline4 <<endl;
cout << "Premium Tickets Sold =" << prem * prem4 <<endl;
cout << "GenAd Tickets Sold =" <<Genad * Genad4 <<endl;

_getch();
return 0;
}



