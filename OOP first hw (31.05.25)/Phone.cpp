#include "Phone.h"

void Phone::SetColor(string color)
{
	if (color != "black" && color != "white" && color != "blue" && color != "pink")
		cout << "Incorrect value for color. Please enter black, white, blue or pink\n";
	else
		this->color = color;
}

void Phone::SetCompany(string company)
{
	if (company != "iphone" && company != "samsung" && company != "xiaomi" && company != "huawei")
		cout << "Incorrect value for company. Please enter iphone, samsung, xiaomi or huawei\n";
	else
		this->company = company;
}

void Phone::SetScreem(string screen)
{
	if (screen != "sensor" && screen != "buttons")
		cout << "Incorrect value for screen. Please enter sensor or buttons\n";
	else
		this->screen = screen;
}

void Phone::Call()
{
	cout << "*beeep-beep-beep...*\n";
}

void Phone::Work()
{
	cout << "playing honkai...\n";
}

void Phone::NoWork()
{
	cout << "playing real life...\n";
}

string Phone::GetColor()
{
	return color;
}

string Phone::GetCompany()
{
	return company;
}

string Phone::GetScreen()
{
	return screen;
}