#include <iostream>
using namespace std;

class Hairbrush 
{
private:
	int lenght; // в см
	string color;
	string material;

public:
	void SetLenght(int lenght);
	void SetColor(string color);
	void SetMaterial(string material);
	void Brush();
	void MakeSound();
	void Clean();
	int GetLenght();
	string GetColor();
	string GetMaterial();
};