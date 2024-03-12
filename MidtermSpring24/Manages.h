#pragma once
#include "EmployeeInfo.h"
#include "Department.h"
class Manages : public EmployeeInfo , public Department
{

private:
	float startDate;

public:

	Manages();

	void setsDate(float startD);

	float getDate();



};

