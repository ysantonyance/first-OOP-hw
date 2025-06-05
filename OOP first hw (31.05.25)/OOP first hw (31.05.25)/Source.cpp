#include <iostream>
using namespace std;

class Hairbrush
{
private:
	int lenght; // в см
	string color;
	string material;

public:
	void SetLenght(int lenght)
	{
		if (lenght < 5 && lenght > 600)
			cout << "incorrect value for lenght. Please enter value from 5 to 600\n";
		else
			this->lenght = lenght;
	}

	void SetColor(string color)
	{
		if (color != "purple" && color != "pink" && color != "black" && color != "white")
			cout << "Incorrect value for color. We only have purple, pink, black or white hair brushes in our store. Choose one of these\n";
		else
			this->color = color;
	}

	void SetMaterial(string material)
	{
		if (material != "silicone" && material != "plastic")
			cout << "Incorrect value for material. This brush can either be silicone or plastic. Choose one of these\n";
		else
			this->material = material;
	}

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

	int GetLenght()
	{
		return lenght;
	}

	string GetColor()
	{
		return color;
	}

	string GetMaterial()
	{
		return material;
	}
};

class Switch
{
private:
	string type; // теплый или холодный свет
	int bulb = 1;
	string where; // стена или потолок

public:
	void SetType(string type)
	{
		if (type != "warm" && type != "cold")
			cout << "Incorrect value for type. The type can be either warm or cold. Choose one of these\n";
		else
			this->type = type;
	}

	void SetBulb(int bulb)
	{
		if (bulb < 1 && bulb > 24)
			cout << "Incorrect value for bulb. Please enter value from 1 to 24\n";
		else
			this->bulb = bulb;
	}

	void SetWhere(string where)
	{
		if (where != "wall" && where != "ceiling")
			cout << "Incorrect value for where. Please enter value \"wall\" or \"ceiling\"\n";
		else
			this->where = where;
	}

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

	string GetType()
	{
		return type;
	}

	int GetBulb()
	{
		return bulb;
	}

	string GetWhere()
	{
		return where;
	}
};

class Window
{
private:
	string size; 
	string direction; // горизонтальное или вертикальное
	string openable; // возможно ли открыть

public:
	void SetSize(string size)
	{
		if (size != "small" && size != "medium" && size != "big")
			cout << "Incorrect value for size. Please enter small, medium or big\n";
		else
			this->size = size;
	}

	void SetDirection(string direction)
	{
		if (direction != "vertical" && direction != "horizontal")
			cout << "Incorrect value for direction. Please enter vertical or horizontal\n";
		else
			this->direction = direction;
	}

	void SetOpenable(string openabale)
	{
		if (openable != "yes" && openable != "no")
			cout << "Incorrect value for openable. Please enter yes or no\n";
		else
			this->openable = openable;
	}

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

	string GetSize()
	{
		return size;
	}

	string GetDirection()
	{
		return direction;
	}

	string GetOpenable()
	{
		return openable;
	}
};

class Blanket
{
private:
	int lenght; // в метрах, так же и ширина
	int width;
	string material;

public:
	void SetLenght(int lenght)
	{
		if (lenght < 60 && lenght > 400)
			cout << "Incorrect value for lenght. Please enter value from 60 to 400\n";
		else
			this->lenght = lenght;
	}

	void SetWidth(int width)
	{
		if (width < 60 && width > 300)
			cout << "Incorrect value for width. Please enter value from 60 to 300\n";
		else
			this->width = width;
	}

	void SetMaterial(string material)
	{
		if (material != "wool" && material != "cotton" && material != "polyester" && material != "cashmere")
			cout << "Incorrect value for material. Please enter wool, cotton, polyester or cashmere\n";
		else
			this->material = material;
	}

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

	int GetLenght()
	{
		return lenght;
	}

	int GetWidth()
	{
		return width;
	}

	string GetMaterial()
	{
		return material;
	}
};

class Phone
{
private:
	string color;
	string company;
	string screen; // сенсор или кнопочки

public:
	void SetColor(string color)
	{
		if (color != "black" && color != "white" && color != "blue" && color != "pink")
			cout << "Incorrect value for color. Please enter black, white, blue or pink\n";
		else
			this->color = color;
	}

	void SetCompany(string company)
	{
		if (company != "iphone" && company != "samsung" && company != "xiaomi" && company != "huawei")
			cout << "Incorrect value for company. Please enter iphone, samsung, xiaomi or huawei\n";
		else
			this->company = company;
	}

	void SetScreem(string screen)
	{
		if (screen != "sensor" && screen != "buttons")
			cout << "Incorrect value for screen. Please enter sensor or buttons\n";
		else
			this->screen = screen;
	}

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

	string GetColor()
	{
		return color;
	}

	string GetCompany()
	{
		return company;
	}

	string GetScreen()
	{
		return screen;
	}
};

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