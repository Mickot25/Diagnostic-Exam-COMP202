/*Diagnostic exam in Comp 202 last January 18 2017.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char time, type;
	double minutes, tcharge, ncharge;

	cout << "Input time D for day charge and N for n charge: "; cin >> time;
	cout << "Input length of call in minutes: "; cin >> minutes;
	cout << "Input type of call S for same network O for other network and I for international: "; cin >> type;

	switch (time)
	{
	case 'D':
	{
		switch (type)
		{
		case 'S': {tcharge = 6.25 * minutes; ncharge = 6.25 * minutes + (6.25 * minutes)*0.10; };
				  break;
		case 'O': {tcharge = 8.25 * minutes; ncharge = 8.25 * minutes + (8.25 * minutes)*0.10; };
				  break;
		case 'I': {tcharge = 25.25 * minutes; ncharge = 25.25 * minutes + (25.25 * minutes)*0.10; };
				  break;
		default: {tcharge = 0; ncharge = 0; };
				 break;
		}
	}

	case 'd':
	case 'N':
	case 'n':
	default:
	}
	
	_getch();
	return 0;
}