/*
*
*	Common Code
*
*	File: commoncode.cpp
*	Author: Alexander Hess
*	Date: 20190828
*	Purpose: To consolidate all personal coding standards and practices
*				and to maintain a centralized and consistent library
*				of commonly reused personal functions
*	Version 1
*
*/

#include "commoncode.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void commoncode::cls()
{
	cout << "\033[2J\033[1;1H";
}
