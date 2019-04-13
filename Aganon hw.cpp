#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	int m, d, y;
	string InvDate;
	bool abort = false;
	
	InvDate = "INVALID DATE!";
		
	do
	{
		cout << "Enter month" << endl;
		cin >> m;
		
		cout << "Enter day" << endl;
		cin >> d;
		
		cout << "Enter year" << endl;
		cin >> y;
				
		if (m >= 13)
		cout << InvDate << endl;
		else if (d == 0)
		cout << InvDate << endl;
		else if (d >= 32)
		cout << InvDate << endl;
		else if (m == 0)
		cout << InvDate << endl;
		else if (d >= 32  && d == 0)
		cout << InvDate << endl;
		else if (m >= 13 && m == 0 && d >= 32  && d == 0)
		cout << InvDate << endl;
		else if (m == 2 && d >= 29)
		cout << InvDate << endl;
		
		switch(m)
		{
			case 1:
				cout << "JANUARY" << ' ';
				break;
			case 2:
				cout << "FEBRUARY" << ' ';
				break;
			case 3:
				cout << "MARCH" << ' ';
				break;
			case 4:
				cout << "APRIL" << ' ';
				break;
			case 5:
				cout << "MAY" << ' ';
				break;
			case 6:
				cout << "JUNE" << ' ';
				break;
			case 7:
				cout << "JULY" << ' ';
				break;
			case 8:
				cout << "AUGUST" << ' ';
				break;
			case 9:
				cout << "SEPTEMBER" << ' ';
				break;
			case 10:
				cout << "OCTOBER" << ' ';
				break;
			case 11:
				cout << "NOVEMBER" << ' ';
				break;
			case 12:
				cout << "DECEMBER" << ' ';
				break;
		}
		
		cout << d << "," << ' ';
		cout << y << endl;
		
	} while (!abort);
	
	_getch();
	return 0;
}
