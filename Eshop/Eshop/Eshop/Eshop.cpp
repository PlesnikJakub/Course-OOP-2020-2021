// Eshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CompanyUser.h"

int main()
{
    CompanyUser* user = new CompanyUser();
    cout << user->ToString() << endl;
}