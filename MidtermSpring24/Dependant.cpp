#include "Dependant.h"


void Dependant::setDEPName(string dName)
{
	cout << "What is the name of the dependant: " << endl;
	cin >> dName;
	depName = dName;
}

void Dependant::setDEPBday(float dBday)
{
	cout << "Birth Year of dependant: " << endl;
	cin >> dBday;
	depbday = dBday;
}

void Dependant::setDEPSex(string dSex)
{
	cout << "Is the Dependant Male or Female" << endl;
	cin >> dSex;
	depSex = dSex;
}

void Dependant::setDEPRel(string dRel)
{
	cout << "What is the relationship with your dependant? " << endl;
	cin >> dRel;
	depRelationship = dRel;
}

string Dependant::getDEPName()
{
	return depName;
}

float Dependant::getDEPBday()
{
	return depbday;
}

string Dependant::getDEPSex()
{
	return depSex;
}

string Dependant::getDEPRel()
{
	return depRelationship;
}
