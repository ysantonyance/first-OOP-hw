#include "Switch.h"

void Switch::SetType(string type)
{
	if (type != "warm" && type != "cold")
		cout << "Incorrect value for type. The type can be either warm or cold. Choose one of these\n";
	else
		this->type = type;
}

void Switch::SetBulb(int bulb)
{
	if (bulb < 1 && bulb > 24)
		cout << "Incorrect value for bulb. Please enter value from 1 to 24\n";
	else
		this->bulb = bulb;
}

void Switch::SetWhere(string where)
{
	if (where != "wall" && where != "ceiling")
		cout << "Incorrect value for where. Please enter value \"wall\" or \"ceiling\"\n";
	else
		this->where = where;
}

void Switch::On()
{
	cout << "the light is on\n";
}

void Switch::MakeSound()
{
	cout << "*click*\n";
}

void Switch::Off()
{
	cout << "the light is off\n";
}

string Switch::GetType()
{
	return type;
}

int Switch::GetBulb()
{
	return bulb;
}

string Switch::GetWhere()
{
	return where;
}