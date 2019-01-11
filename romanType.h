/*****************************************************************************
*Self-STUDY
*Name:Y Nguyen
*Course: DATA STRUCTURE USING C++
*Date: 01/10/2019
*Class
*****************************************************************************/
#pragma once
#include<string>
#include<iostream>
using namespace std;

class romanType
{
public:
	enum  romanNumBasic{I,V,X,L,C,D,M,E};
	/*I =1, V=5, X=10, L=50, C=100, D=500, M =1000*/

	void setRomanNum(string& );
	string getRomanNum();
		//Function return a number in Roman numeral format
	void setIntegerNum(int );
		// store a positive integer number to variable num
	int getInteger();
		//Function returning a integer Number
	void romanToInteger(string&);
		//Function converting a Roman numeral to a Positive Integer
	romanNumBasic charToRomanNum(char);
	int romanSympolValue(char );
	
	void printNumber();
	romanType();
		//Default constructor
	romanType(string& s);
		//Overide constructor
	~romanType();

private:
	romanNumBasic rNum;
	int convertedNum;
	string rNumStr;


};

