#pragma once
#include<string>

using namespace std;

class AbstractCustomer
{
private:
	string name;

public:
	AbstractCustomer(string name);
	string getName();
	virtual string getUniqueIdentifier() = 0;
};

