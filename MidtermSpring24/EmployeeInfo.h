#pragma once
#include <iostream>
#include<string>

using namespace std;
class EmployeeInfo
{
private:
	
	string Name1;  //Employee FName
	string Name2;  //Employee SecondName
	double SSN;  //SSN Info
	float bDay;  //Emp Birthday

	//Department Info
	string department;

	//Emp Adress
	string add;

	//Salary
	float salary;

	//Gender
	string gender;

public:

	//Constructor
	//EmployeeInfo();

	//Setters
	void setName(string first, string last);
	void setBirth(float bday);
	void setSocial(float ssn);
	void setDepartment(string dept);

	//Getters
	string getName();
	float getBirth();
	float getSocial();
	string getDepartment();
};


