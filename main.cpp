/*****************************************************************************
*Self-STUDY
*Name:Y Nguyen
*Course: DATA STRUCTURE USING C++
*Date: 01/10/2019
*This program can be able to convert an number from Roman numeral format 
*into an positive integer.
*****************************************************************************/
#include<iostream>
#include<string>
#include "romanType.h"

using namespace std;
int main() {
	string romanNumber;
	char option; //option
	cout << "     -------------Roman numeral Converter-----------\n " << endl;
	
		do {
			cout << "           Enter a number in Roman numeral format:";
			cin >> romanNumber;
			cout << "                   Processing ...\n\n";

			//create an romanType object and initilize 
			romanType converter;	// Create a single object of a class dont need a () after objectName 
			converter.romanToInteger(romanNumber);
			if (converter.getInteger() != -1) {
				converter.printNumber();
				cout << "\n		   Do you want to continue Y/N: ";
				cin >> option;
				cout << endl;
			}//end if
			else {
				cout << "\n		   Do you want to continue Y/N: ";
				cin >> option;
				cout << endl;
			}
		
			
		} while (option == 'y' || option == 'Y');
	

	system("PAUSE");
	return 0;
}