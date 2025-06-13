#include <iostream>
#include "Hairbrush.h"
#include "Switch.h"
#include "Window.h"
#include "Blanket.h"
#include "Phone.h"
using namespace std;

void space()
{
	cout << "\n";
}

int main()
{
	
	Hairbrush MyBrush;
	//MyBrush.lenght = 15;
	//MyBrush.color = "purple";
	//MyBrush.material = "silicone";
	cout << "My Brush: \n";
	MyBrush.SetLenght(15);
	cout << MyBrush.GetLenght() << "\n";

	MyBrush.SetColor("purple");
	cout << MyBrush.GetColor() << "\n";

	MyBrush.SetMaterial("silicone");
	cout << MyBrush.GetMaterial() << "\n";

	MyBrush.Brush();
	MyBrush.MakeSound();
	MyBrush.Clean();
	space();
	
	Switch MySwitch;
	//MySwitch.bulb = 1;
	//MySwitch.type = "warm";
	//MySwitch.where = "wall";
	cout << "My switch: \n";
	MySwitch.SetBulb(1);
	cout << MySwitch.GetBulb() << "\n";

	MySwitch.SetType("warm");
	cout << MySwitch.GetType() << "\n";

	MySwitch.SetWhere("wall");
	cout << MySwitch.GetWhere() << "\n";

	MySwitch.MakeSound();
	MySwitch.On();
	MySwitch.MakeSound();
	MySwitch.Off();
	space();
	

	Window MyWindow;
	//MyWindow.size = "big";
	//MyWindow.direction = "vertical";
	//MyWindow.openable = yes;
	cout << "My Window: \n";
	MyWindow.SetSize("big");
	cout << MyWindow.GetSize() << "\n";

	MyWindow.SetDirection("vertical");
	cout << MyWindow.GetDirection() << "\n";

	MyWindow.SetOpenable("yes");
	cout << MyWindow.GetOpenable() << "\n";

	MyWindow.Open();
	MyWindow.MakeSound();
	MyWindow.Closed();
	space();

	Blanket MyBlanket;
	//MyBlanket.lenght = 400;
	//MyBlanket.width = 300;
	//MyBlanket.material = "wool";
	cout << "My Blanket: \n";
	MyBlanket.SetLenght(400);
	cout << MyBlanket.GetLenght() << "\n";

	MyBlanket.SetWidth(300);
	cout << MyBlanket.GetWidth() << "\n";

	MyBlanket.SetMaterial("wool");
	cout << MyBlanket.GetMaterial() << "\n";

	MyBlanket.MakeSound();
	MyBlanket.Hug();
	MyBlanket.Warm();
	space();
	
	Phone MyPhone;
	//MyPhone.color = "pink";
	//MyPhone.company = "samsung";
	//MyPhone.screen = "sensor";
	cout << "My Phone: \n";
	MyPhone.SetColor("pink");
	cout << MyPhone.GetColor() << "\n";

	MyPhone.SetCompany("samsung");
	cout << MyPhone.GetCompany() << "\n";

	MyPhone.SetScreem("sensor");
	cout << MyPhone.GetScreen() << "\n";

	MyPhone.Work();
	MyPhone.NoWork();
	MyPhone.Call();
	space();

}