#include "Blanket.h"

void Blanket::SetLenght(int lenght)
{
	if (lenght < 60 && lenght > 400)
		cout << "Incorrect value for lenght. Please enter value from 60 to 400\n";
	else
		this->lenght = lenght;
}

void Blanket::SetWidth(int width)
{
	if (width < 60 && width > 300)
		cout << "Incorrect value for width. Please enter value from 60 to 300\n";
	else
		this->width = width;
}

void Blanket::SetMaterial(string material)
{
	if (material != "wool" && material != "cotton" && material != "polyester" && material != "cashmere")
		cout << "Incorrect value for material. Please enter wool, cotton, polyester or cashmere\n";
	else
		this->material = material;
}

void Blanket::MakeSound()
{
	cout << "*Rustle*\n";
}

void Blanket::Hug()
{
	cout << "the blanket is hugging you\n";
}

void Blanket::Warm()
{
	cout << "the blanket is rising you body temperature\n";
}

int Blanket::GetLenght()
{
	return lenght;
}

int Blanket::GetWidth()
{
	return width;
}

string Blanket::GetMaterial()
{
	return material;
}