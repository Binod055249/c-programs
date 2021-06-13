//============================================================================
// Name        : DaysToYearWeeksDays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of days to which you want to convert: ";
	int noDays, noWeeks, noYears = 0;
	cin >> noDays;
	/*
	 noWeeks=noDays/7;
	 noDays=noDays%7;

	 while(noWeeks>=52){
	 noWeeks=noWeeks-52;
	 noYears++;
	 }
	 */
	noYears=noDays/365;
	noWeeks=(noDays%365)/7;
	noDays=(noDays%365)%7;
	cout << noYears << " " << noWeeks << " " << noDays;

	return 0;
}
