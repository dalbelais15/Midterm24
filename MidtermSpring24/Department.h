#pragma once
#include "EmployeeInfo.h"
class Department : public EmployeeInfo
{
private:
	string DepName;
	string DepNo;
	string DepLocation;

	string DepManager;
	string DepEmployee1;
	string DepEmployee2;
	string DepEmployee3;
	string DepEmployee4;



public:

	//Department();

	void setDepName(string depName);
	void setDepNo(string depNumber);
	void setDepLocation(string depLocation);

	void setDepManager(string depMan);
	void setDepEmployee1(string emp1);
	void setDepEmployee2(string emp2);
	void setDepEmployee3(string emp3);
	void setDepEmployee4(string emp4);




	string getDepName();
	string getDepNo();
	string getDepLocation();

	string getDepManager();
	string getDepEmployee1();
	string getDepEmployee2();
	string getDepEmployee3();
	string getDepEmployee4();

};

