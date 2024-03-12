#pragma once
#include "EmployeeInfo.h"
#include "Department.h"
#include "Manages.h"
class Project : public EmployeeInfo, public Department, public Manages
{
private:
	string projectName;
	string empNewP;

public:
	
	void setcurrentProject(string projectName1);
	void setaddEmpP(string addEmp1);
	
	string getcurrentProject();
	string getaddEmpP();
};

