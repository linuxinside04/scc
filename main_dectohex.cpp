/*	 
	main_hextodec.cpp
	converter integer numbers from decimal into hexadecimal
*/
#include <iostream>
#include "conio.h"
using namespace std;

string converting(int n) {
	int digit;
	const int basis = 16;		//basis of calc.system
	int remnant = n % basis;
	int quot;
	string hexres;
	do{
		quot = n / basis;//divide the n on basis while quotient smaller than basis
		switch(remnant){
			case 0: hexres[digit++] = '0'; continue;
			case 1: hexres[digit++] = '1'; continue;
			case 2: hexres[digit++] = '2'; continue;
			case 3: hexres[digit++] = '3'; continue;
			case 4: hexres[digit++] = '4'; continue;
			case 5: hexres[digit++] = '5'; continue;
			case 6: hexres[digit++] = '6'; continue;
			case 7: hexres[digit++] = '7'; continue;
			case 8: hexres[digit++] = '8'; continue;
			case 9: hexres[digit++] = '9'; continue;
			/*
				for calc systems,which basis is x:
				comment the lines with "case x" and greater
				and change basis to x
			*/
			case 10: hexres[digit++] = 'a'; continue;
			case 11: hexres[digit++] = 'b'; continue;
			case 12: hexres[digit++] = 'c'; continue;
			case 13: hexres[digit++] = 'd'; continue;
			case 14: hexres[digit++] = 'e'; continue;
			case 15: hexres[digit++] = 'f'; continue;
			default: error();
		}
		quot = n;
	}while(quot>basis);
	if( !(remnant > basis) ) {
			string hexres2 = Convert.ToString(quot);
			string hexres3 = Convert.ToString(remnant);
			string out = hexres + hexres2 + hexres3;
			return out;
	} 
	else{
		error();
	}
}

void error(){//method for rebooting the program
	cerr << "Error! Something went wrong,Press any key to restart:";
	_getch();
	system("cls");
	system("clear");
	goto begin;
}

int main()
{
	begin:						// start of the program
	int input;					//number for converting
	cout << "Enter decimal number:";
	cin >> input;
	cout << "\nThis number in hexadecimal: 0x" << converting(input) << "\n\n";
	cout << "Press any key for exit:";
	_getch();
	return 0;
}