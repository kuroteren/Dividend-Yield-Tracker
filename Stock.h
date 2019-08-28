#pragma once
/*
*
*	Stock
*
*	File: Stock.h
*	Author: Alexander Hess
*	Date: 20190828
*	Purpose: 
*	Version 1
*
*/

#include <cstdlib>
#include <string>

using namespace std;

class Stock
{
private:
	string name, ticker;
	float price, shares, totalValue, dividendTotal, currentYield;
	int dividendsReceived;

public:
	//Set functions
	void set_Name(string n);
	void set_Tick(string t);
	void set_Price(float p);
	void set_Shares(float s);
	void set_Total(float v);
	void set_All(string n, string t, float p, float s, float v);

	//Get functions
	string get_Name();
	string get_Tick();
	float get_Price();
	float get_Shares();
	float get_Total();
	string get_Formatted();

	//Dividend Functions
	void add_Dividend(float d);
	void calculate_Yield();
};

