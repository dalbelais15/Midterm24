#pragma once
#include "EmployeeInfo.h"
#include "Department.h"
class EmpWorkDept : public EmployeeInfo, public Department
{

public:
	
	void setaddEmp(string newEmp);

	string getaddEmp();
};

