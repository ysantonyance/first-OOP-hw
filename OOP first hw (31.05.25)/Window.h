#include <iostream>
using namespace std;

class Window
{
private:
	string size;
	string direction; // горизонтальное или вертикальное
	string openable; // возможно ли открыть

public:
	void SetSize(string size);
	void SetDirection(string direction);
	void SetOpenable(string openabale);
	void MakeSound();
	void Open();
	void Closed();
	string GetSize();
	string GetDirection();
	string GetOpenable();
};