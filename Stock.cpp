#include "Stock.h"

void Stock::set_Name(string n)
{
	this->name = n;
}

void Stock::set_Tick(string t)
{
	this->ticker = t;
}

void Stock::set_Price(float p)
{
	this->price = p;
}

void Stock::set_Shares(float s)
{
	this->shares = s;
}

void Stock::set_Total(float v)
{
	this->totalValue = v;
}

void Stock::set_All(string n, string t, float p, float s, float v)
{
	this->name = n;
	this->ticker = t;
	this->price = p;
	this->shares = s;
	this->totalValue = v;
}

string Stock::get_Name()
{
	return this->name;
}

string Stock::get_Tick()
{
	return this->ticker;
}

float Stock::get_Price()
{
	return this->price;
}

float Stock::get_Shares()
{
	return this->shares;
}

float Stock::get_Total()
{
	return this->totalValue;
}

string Stock::get_Formatted()
{
	return string("Stock: " + name + "\n" + "Ticker: " + ticker + "\n" + "Average Price: " + price + "\n" + "Shares :" + shares + "\n" + "Total Value: " + totalValue + "\n");
}

void Stock::add_Dividend(float d)
{
	dividendsReceived++;

	dividendTotal += d;
}

void Stock::calculate_Yield()
{
	currentYield = (dividendTotal / totalValue) * 100;
}
