#include <iostream>
using namespace std;

class Switch
{
private:
	string type; // теплый или холодный свет
	int bulb = 1;
	string where; // стена или потолок

public:
	void SetType(string type);
	void SetBulb(int bulb);;
	void SetWhere(string where);
	void On();
	void MakeSound();
	void Off();
	string GetType();
	int GetBulb();
	string GetWhere();
};