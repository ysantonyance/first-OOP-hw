#include <iostream>
using namespace std;

class Phone
{
private:
	string color;
	string company;
	string screen; // сенсор или кнопочки

public:
	void SetColor(string color);
	void SetCompany(string company);
	void SetScreem(string screen);
	void Call();
	void Work();
	void NoWork();
	string GetColor();
	string GetCompany();
	string GetScreen();
};