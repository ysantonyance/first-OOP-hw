#include "Hairbrush.h"

void Hairbrush::SetLenght(int lenght)
{
	if (lenght < 5 && lenght > 600)
		cout << "incorrect value for lenght. Please enter value from 5 to 600\n";
	else
		this->lenght = lenght;
}

void Hairbrush::SetColor(string color)
{
	if (color != "purple" && color != "pink" && color != "black" && color != "white")
		cout << "Incorrect value for color. We only have purple, pink, black or white hair brushes in our store. Choose one of these\n";
	else
		this->color = color;
}

void Hairbrush::SetMaterial(string material)
{
	if (material != "silicone" && material != "plastic")
		cout << "Incorrect value for material. This brush can either be silicone or plastic. Choose one of these\n";
	else
		this->material = material;
}

void Hairbrush::Brush()
{
	cout << "Brushing...\n";
}

void Hairbrush::MakeSound()
{
	cout << "*brush brush*\n";
}

void Hairbrush::Clean()
{
	cout << "cleaning the brush from hair\n";
}

int Hairbrush::GetLenght()
{
	return lenght;
}

string Hairbrush::GetColor()
{
	return color;
}

string Hairbrush::GetMaterial()
{
	return material;
}