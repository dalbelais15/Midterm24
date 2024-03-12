#include "Manages.h"

Manages::Manages() {
	cout << "Defoult Constructor for Manages" << endl;
}

void Manages::setsDate(float startD)
{
	startDate = startD;
}

float Manages::getDate()
{
	return startDate;
}
