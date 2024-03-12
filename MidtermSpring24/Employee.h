#pragma once
class Emplyee
{
#pragma once
#include <iostream>
#include<string>

	using namespace std;
	class Employee
	{
	private:
		//Employee Name
		string employeeName;

		//SSN Info
		double SSN;

		//Emp Birthday
		float bDay;

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
		EmployeeInfo();

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


