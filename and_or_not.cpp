#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void time_delay(int seconds) 
{
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock_t();
	while(clock() < start_time + milli_seconds);
}

int main() 
{
	int IF1; int IF2; string choise; string light_bulb_on = "\nlight bulb on\n"; string light_bulb_off = "\nlight bulb off\n";
	while (true) 
	{
		cout << "\n1.and, 2.or, 3.not: "; cin >> choise;
		if (choise == "1" || choise == "and")
		{
			cout << "\nIF1: "; cin >> IF1;
			cout << "IF2: "; cin >> IF2;
			if (IF1 == 1 && IF2 == 1)
			{
				cout << light_bulb_on;
				time_delay(1.5);
			}
			else
			{
				cout << light_bulb_off;
				time_delay(1.5);
			}
		}
		else if (choise == "2" || choise == "or")
		{
			cout << "\nIF1: "; cin >> IF1;
			cout << "IF2: "; cin >> IF2;
			if (IF1 == 1 || IF2 == 1)
			{
				cout << light_bulb_on;
				time_delay(1.5);
			}
			else 
			{
				cout << light_bulb_off;
				time_delay(1.5);
			}
		}
		else if (choise == "3" || choise == "not")
		{
			cout << "\nIF1: "; cin >> IF1;
			if (IF1 == 1) 
			{
				cout << light_bulb_off;
				time_delay(1.5);
			}
			else if (IF1 == 0)
			{
				cout << light_bulb_on;
				time_delay(1.5);
			}
		}
		else 
		{
			exit(1);
		}
	} 	
}
