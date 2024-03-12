#pragma once
#include "EmployeeInfo.h"
#include "Department.h"
class Dependant : public EmployeeInfo, public Department
{
private:
	string depName;
	float depbday;
	string depSex;
	string depRelationship;

public:

	void setDEPName(string dName);

	void setDEPBday(float dBday);

	void setDEPSex(string dSex);

	void setDEPRel(string dRel);

	string getDEPName();

	float getDEPBday();

	string getDEPSex();

	string getDEPRel();

};

