#include "Department.h"

void Department::setDepName(string depName)
{
	cout << "Enter the name of the Department you work for: " << endl;
	cin >> depName;
	DepName = depName;
}

void Department::setDepNo(string depNumber)
{
	cout << "Enter the Department Number: " << endl;
	cin >> depNumber;
	DepNo = depNumber;
}

void Department::setDepLocation(string depLocation)
{
	cout << "Enter the location/address of the department: " << endl;
	cin >> depLocation;
	DepLocation = depLocation;
}

void Department::setDepManager(string depMan)
{
	cout << "Who is the department Manager?" << endl;
	cin >> depMan;
	DepManager = depMan;

}

void Department::setDepEmployee1(string emp1)
{
	cout << "Name of first employee in Department: " << endl;
	cin >> emp1;
	DepEmployee1 = emp1;
}

void Department::setDepEmployee2(string emp2)
{
	cout << "Name of second employee in Department: " << endl;
	cin >> emp2;
	DepEmployee2 = emp2;
}

void Department::setDepEmployee3(string emp3)
{
	cout << "Name of third employee in Department: " << endl;
	cin >> emp3;
	DepEmployee3 = emp3;
}

void Department::setDepEmployee4(string emp4)
{
	cout << "Name of fourth employee in Department: " << endl;
	cin >> emp4;
	DepEmployee4 = emp4;
}

string Department::getDepName()
{
	return DepName;
}

string Department::getDepNo()
{
	return DepNo;
}

string Department::getDepLocation()
{
	return DepLocation;
}

string Department::getDepManager()
{
	return DepManager;
}

string Department::getDepEmployee1()
{
	return DepEmployee1;
}

string Department::getDepEmployee2()
{
	return DepEmployee2;
}

string Department::getDepEmployee3()
{
	return DepEmployee3;
}

string Department::getDepEmployee4()
{
	return DepEmployee4;
}
