/*****************************************************************************
*Self-STUDY
*Name:Y Nguyen
*Course: DATA STRUCTURE USING C++
*Date: 01/10/2019
*This is an implemetation file of romanType Class
*****************************************************************************/
#include "romanType.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


void romanType::setRomanNum(string& r)
{ 
	rNumStr = r;
}

string romanType::getRomanNum()
{	
	return rNumStr; /// can rewrite this function so that it can 
					// capitalize the rNumStr
}

//This Function Store a positive integer needed to be converted to Roman into num
void romanType::setIntegerNum(int n)
{
	convertedNum=n;
}

int romanType::getInteger()
{
	return convertedNum;
}

//Function converting Roman Numeral to Positive Ingeter
void romanType::romanToInteger(string& r)
{
	rNumStr = r;
	int size= r.size();
	int value;

	
		for (int i = 0;i <= size - 1;i++) {
			value = romanSympolValue(r[i]);
			if (value != -1) {
				if (i == size - 1) {
					convertedNum = convertedNum + value;
					break;
				}
				if (charToRomanNum(r[i]) >= charToRomanNum(r[i + 1])) {
					convertedNum = convertedNum + value;
				}
				else {
					convertedNum = convertedNum - value;
				}
			}
			else {
				convertedNum = -1;
				cout << "           Not a valid Roman numeral\n";
				break;
				
			}
		}//end for
		
	}

//This Function return a integer value of seven symbols I,V,X,L,C,D,M
romanType::romanNumBasic romanType::charToRomanNum(char r)
{
	
	if (r == 'i' || r == 'I')
		rNum = I;

	else if (r == 'v' || r == 'V')
		rNum = V;

	else if (r == 'x' || r == 'X')
		rNum = X;

	else if (r == 'l' || r == 'L')
		rNum = L;

	else if (r == 'c' || r == 'C')
		rNum = C;

	else if (r == 'd' || r == 'D')
		rNum = D;

	else rNum=M; 

	return rNum;
}

 

 int romanType::romanSympolValue(char r)
 {
	 int value;
	 if (r == 'i' || r == 'I')
		 value = 1;

	 else if (r == 'v' || r == 'V')
		 value = 5;

	 else if (r == 'x' || r == 'X')
		 value = 10;

	 else if (r == 'l' || r == 'L')
		 value = 50;

	 else if (r == 'c' || r == 'C')
		 value = 100;

	 else if (r == 'd' || r == 'D')
		 value = 500;

	 else if (r == 'm' || r == 'M')
		 value = 1000;
	 else value = -1;

	 return value;
 }

 void romanType::printNumber()
 {
	 int op;
	 cout << "        Do you want to print a Roman numeral or Positive Integer?\n";
	 cout << "        Option 1: Print out the Roman numeral\n";
	 cout << "        Option 2: Print out the positive Integer\n";
	 cout << "        Enter your option here: ";
	 cin >> op;
	 if (op==1) {
		 cout << rNumStr;
	 }
	 else if (op==2) {
		 cout << setw(20)<<convertedNum;
	 }
	 else
		 cout << "   I don't understand your option. Please try again.\n";
 }
romanType::romanType()
{
	rNumStr="";
	convertedNum = 0;
}
romanType::romanType(string& s)
{
	rNumStr = s;
	convertedNum = 0;
}


romanType::~romanType()
{
}
