/*
*
*	Dividend Yield Tracker
*
*	File: Dividend Yield Tracker.cpp
*	Author: Alexander Hess
*	Date: 20190828
*	Purpose: To log and track dividend history and yield %
*	Version 0.0.1
*
*/

//Definitions
constexpr auto VERSION_MAJ = "0";
constexpr auto VERSION_MIN = "0";
constexpr auto VERSION_BLD = "1";

//System includes
#include <iostream>

//User includes
#include "codestandards.h"
#include "sqlite3.h"

using namespace std;

int main()
{
    /*
	Load stored data
	->First run obviously has no previous data
	->First run will instead make the database
	*/
	sqlite3 * dbMain;
	sqlite3_open("dyt_main", &dbMain);

	/*
	Display initial screen
	->Data displayed:
	->Current investment amount, Current YTD Dividends, Yield %
	*/


	/*
	Menu
	->Add stock
	->Update stock
	->Add dividend payout
	->Dividend History
	->Delete stock
	->Help
	*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
