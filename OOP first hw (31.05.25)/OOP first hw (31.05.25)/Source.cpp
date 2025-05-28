#include <iostream>
using namespace std;

class Hairbrush
{
public:
	int lenght; // в см
	string color;
	string material;

	void Brush()
	{
		cout << "Brushing...\n";
	}

	void MakeSound()
	{
		cout << "*brush brush*\n";
	}

	void Clean()
	{
		cout << "cleaning the brush from hair\n";
	}
};

class Switch
{
public:
	string type; // теплый или холодный свет
	int bulb = 1;
	string where; // стена или потолок

	void On()
	{
		cout << "the light is on\n";
	}

	void MakeSound()
	{
		cout << "*click*\n";
	}

	void Off()
	{
		cout << "the light is off\n";
	}
};

class Window
{
public:
	string size; 
	string direction; // горизонтальное или вертикальное
	bool openable; // возможно ли открыть

	void MakeSound()
	{
		cout << "*clunk*\n";
	}

	void Open()
	{
		cout << "the window is opened\n";
	}

	void Closed()
	{
		cout << "the window in closed\n";
	}
};

class Blanket
{
public:
	int lenght; // в метрах, так же и ширина
	int width;
	string material;

	void MakeSound()
	{
		cout << "*Rustle*\n";
	}

	void Hug()
	{
		cout << "the blanket is hugging you\n";
	}

	void Warm()
	{
		cout << "the blanket is rising you body temperature\n";
	}
};

class Phone
{
public:
	string color;
	string company;
	string screen; // сенсор или кнопочки

	void Call()
	{
		cout << "*beeep-beep-beep...*\n";
	}

	void Work()
	{
		cout << "playing honkai...\n";
	}

	void NoWork()
	{
		cout << "playing real life...\n";
	}
};

int main()
{
	/*
	Hairbrush MyBrush;
	MyBrush.lenght = 15;
	MyBrush.color = "purple";
	MyBrush.material = "silicone";
	MyBrush.Brush();
	MyBrush.MakeSound();
	MyBrush.Clean();
	*/
	
	/*
	Switch MySwitch;
	MySwitch.bulb = 1;
	MySwitch.type = "warm";
	MySwitch.where = "wall";
	MySwitch.MakeSound();
	MySwitch.On();
	MySwitch.MakeSound();
	MySwitch.Off();
	*/
	
	/*
	Window MyWindow;
	MyWindow.size = "big and wide";
	MyWindow.direction = "vertical";
	MyWindow.openable = true;
	MyWindow.Open();
	MyWindow.MakeSound();
	MyWindow.Closed();
	*/

	/*
	Blanket MyBlanket;
	MyBlanket.lenght = 3;
	MyBlanket.width = 2;
	MyBlanket.material = "wool";
	MyBlanket.MakeSound();
	MyBlanket.Hug();
	MyBlanket.Warm();
	*/
	
	/*
	Phone MyPhone;
	MyPhone.color = "pink";
	MyPhone.company = "samsung";
	MyPhone.screen = "sensor";
	MyPhone.Work();
	MyPhone.NoWork();
	MyPhone.Call();
	*/
	
}