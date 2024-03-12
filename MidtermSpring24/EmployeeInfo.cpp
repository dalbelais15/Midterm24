#include "EmployeeInfo.h"

/* EmployeeInfo::EmployeeInfo()
{


}*/


void EmployeeInfo::setName(string first, string last)
{
	Name1 = first;
	Name2 = last;
	
}

void EmployeeInfo::setBirth(float bday)
{
	//cout << "Enter the Birthdate " << endl;
	//cin >> bday;
	bDay = bday;

}


void EmployeeInfo::setSocial(float ssn)
{
	SSN = ssn;
}

void EmployeeInfo::setDepartment(string dept)
{
	department = dept;

	
}

string EmployeeInfo::getName()
{
	return Name1;
}

float EmployeeInfo::getBirth()
{
	return bDay;
}

float EmployeeInfo::getSocial()
{
	return SSN;
}

string EmployeeInfo::getDepartment()
{
	return department;
}
