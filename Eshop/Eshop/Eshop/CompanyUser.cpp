#include "CompanyUser.h"

CompanyUser::CompanyUser(string email, string name, string password) : AbstractRegisteredCustomer(email, name)
{
}

string CompanyUser::ToString()
{
	return "some user name";
}

bool CompanyUser::Login(string email, string password)
{
	return false;
}
