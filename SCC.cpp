/*	 hextodec.cpp
	converter integer numbers from decimal into hexadecimal
*/
#include <iostream>
#include "conio.h"
using namespace std;
char converting(int n) {
	int remnant = n % 16;
	unsigned int digit;//number of the digit
	char hexresult[256];

	while((n / 16) >= 1) {//recording result into the array
		digit++;
		switch(remnant)
		{
		case 0:
			hexresult[digit] = '0';
			continue;
		case 1:
			hexresult[digit] = '1';
			continue;
		case 2:
			hexresult[digit] = '2';
			continue;
		case 3:
			hexresult[digit] = '3';
			continue;
		case 4:
			hexresult[digit] = '4';
			continue;
		case 5:
			hexresult[digit] = '5';
			continue;
		case 6:
			hexresult[digit] = '6';
			continue;
		case 7:
			hexresult[digit] = '7';
			continue;
		case 8:
			hexresult[digit] = '8';
			continue;
		case 9:
			hexresult[digit] = '9';
			continue;
		case 10:
			hexresult[digit] = 'A';
			continue;
		case 11:
			hexresult[digit] = 'B';
			continue;
		case 12:
			hexresult[digit] = 'C';
			continue;
		case 13:
			hexresult[digit] = 'D';
			continue;
		case 14:
			hexresult[digit] = 'E';
			continue;
		case 15:
			hexresult[digit] = 'F';
			continue;
		}
		for(digit >= 0; digit--;) {//printing array from his end
			return hexresult[digit];
		}
	}

}
int main()
{
	int number;//number for converting
	cout << "Enter decimal number:";
	cin >> number;
	cout << "\nThis number in hexadecimal:" << converting(number);
	_getch();
	return 0;
}