#include "Project.h"



void Project::setcurrentProject(string projectName1)
{
	cout << "Project Name: " << endl;
	cin >> projectName1;
	projectName = projectName1;
}

void Project::setaddEmpP(string addEmp1)
{
	cout << "New Project Emp Name: " << endl;
	cin >> addEmp1;
	empNewP = addEmp1;
}

string Project::getcurrentProject()
{
	return projectName;
}

string Project::getaddEmpP()
{
	return empNewP;
}
