#include <iostream>
using namespace std;

class Blanket
{
private:
	int lenght; // в метрах, так же и ширина
	int width;
	string material;

public:
	void SetLenght(int lenght);
	void SetWidth(int width);
	void SetMaterial(string material);
	void MakeSound();
	void Hug();
	void Warm();
	int GetLenght();
	int GetWidth();
	string GetMaterial();
};