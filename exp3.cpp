
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{ 
	 float netBalance,payment,d1,d2,Interest, avgdailybalance;

	 cout << "Enter Balance show on the bill" << endl;
	 cin >> netBalance;
	 cout << "Payment" << endl;
	 cin >> payment;
	 cout << "Enter number of days in billing cycle" << endl;
	 cin >> d1;
	 cout << "Enter number of days payment is made before billing cycle" << endl;
	 cin >> d2;
	 cout << " Enter Interest rate per month" << endl; 
	 cin >> Interest;
	 avgdailybalance = (netBalance* d1 - payment * d2)/d1; 
     cout << "Average Daily Balance=" << (netBalance*d1-payment*d2)/d1 << endl;
	 cout << " Interest= " << avgdailybalance * Interest;

	 _getch();
	 return 0;
}