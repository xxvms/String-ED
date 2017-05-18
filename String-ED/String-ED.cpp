// String-ED.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string.h>	 		// for strcpy(), strcat()
#include <iostream>
using namespace std;

const int SZ = 80;       		// size of all String objects

class String             		// user-defined string type
{
private:
	char str[SZ];               // holds a string

public:
	String()                       	// constructor, no-args
	{
		strcpy_s(str, "");
	}

	String(char s[])             	// constructor, one-arg
	{
		strcpy_s(str, s);
	}

	String operator + (String ss)  	// add a String to another
	{
		//String temp;		     		// make a temporary String
		//strcpy_s(temp.str, str); 	// copy this string to temp
		//strcat_s(temp.str, ss.str);  	// add the argument string

		strcat_s(str, ss.str);
		return String(str);		// return temp String
	}
	void printString()
	{
		std::cout << str << std::endl;
	}
};

int main()
{
	String s1 = "round";   // uses one-argument constructor. 
	String s2 = "about";   // uses one-argument constructor.
	String s3;              // uses no-argument constructor.
	s3 = s1 + s2;	     // add s2 to s1, assign to s3.


	s3.printString();

	system("pause");
	return 0;
}
