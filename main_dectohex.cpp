/*	 hextodec.cpp
	converter integer numbers from decimal into hexadecimal
*/
#include <iostream>
#include "conio.h"
using namespace std;
char converting(int n) {
	int remnant = n % 16;//remnant of dividing
	unsigned int digit=0;//number of the digit
	char *hexresult;
	char *hexresult = new char[digit];
	while((n / 16) > 0) {//recording result into the array
		switch(remnant)
		{
		case 0:
			digit++;
			hexresult[digit] = '0';
			continue;
		case 1:
			digit++;
			hexresult[digit] = '1';
			continue;
		case 2:
			digit++;
			hexresult[digit] = '2';
			continue;
		case 3:
			digit++;
			hexresult[digit] = '3';
			continue;
		case 4:
			digit++;
			hexresult[digit] = '4';
			continue;
		case 5:
			digit++;
			hexresult[digit] = '5';
			continue;
		case 6:
			digit++;
			hexresult[digit] = '6';
			continue;
		case 7:
			digit++;
			hexresult[digit] = '7';
			continue;
		case 8:
			digit++;
			hexresult[digit] = '8';
			continue;
		case 9:
			digit++;
			hexresult[digit] = '9';
			continue;
		case 10:
			digit++;
			hexresult[digit] = 'A';
			continue;
		case 11:
			digit++;
			hexresult[digit] = 'B';
			continue;
		case 12:
			digit++;
			hexresult[digit] = 'C';
			continue;
		case 13:
			digit++;
			hexresult[digit] = 'D';
			continue;
		case 14:
			digit++;
			hexresult[digit] = 'E';
			continue;
		case 15:
			digit++;
			hexresult[digit] = 'F';
			continue;
		}
		char hexresult[256];
		for(digit >= 0; digit--;) {//printing array from his end
			//cout << hexresult[digit];
			return hexresult[digit];
			delete[] hexresult;
		}
	}

}
int main()
{
	int number=0;//number for converting
	cout << "Enter decimal number:";
	cin >> number;
	cout << "\nThis number in hexadecimal:" << converting(number);
	_getch();
	return 0;
}