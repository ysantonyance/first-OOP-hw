#include <iostream>
using namespace std;

class Hairbrush
{
private:
	int lenght; // в см
	string color;
	string material;

public:
	void SetLenght(int new_lenght)
	{
		if (new_lenght < 5 && new_lenght > 600)
			cout << "incorrect value for lenght. Please enter value from 5 to 600\n";
		else
			lenght = new_lenght;
	}

	void SetColor(string new_color)
	{
		if (new_color != "purple" && new_color != "pink" && new_color != "black" && new_color != "white")
			cout << "Incorrect value for color. We only have purple, pink, black or white hair brushes in our store. Choose one of these\n";
		else
			color = new_color;
	}

	void SetMaterial(string new_material)
	{
		if (new_material != "silicone" && new_material != "plastic")
			cout << "Incorrect value for material. This brush can either be silicone or plastic. Choose one of these\n";
		else
			material = new_material;
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
	void SetType(string new_type)
	{
		if (new_type != "warm" && new_type != "cold")
			cout << "Incorrect value for type. The type can be either warm or cold. Choose one of these\n";
		else
			type = new_type;
	}

	void SetBulb(int new_bulb)
	{
		if (new_bulb < 1 && new_bulb > 24)
			cout << "Incorrect value for bulb. Please enter value from 1 to 24\n";
		else
			bulb = new_bulb;
	}

	void SetWhere(string new_where)
	{
		if (new_where != "wall" && new_where != "ceiling")
			cout << "Incorrect value for where. Please enter value \"wall\" or \"ceiling\"\n";
		else
			where = new_where;
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
	void SetSize(string new_size)
	{
		if (new_size != "small" && new_size != "medium" && new_size != "big")
			cout << "Incorrect value for size. Please enter small, medium or big\n";
		else
			size = new_size;
	}

	void SetDirection(string new_direc)
	{
		if (new_direc != "vertical" && new_direc != "horizontal")
			cout << "Incorrect value for direction. Please enter vertical or horizontal\n";
		else
			direction = new_direc;
	}

	void SetOpenable(string new_openable)
	{
		if (new_openable != "yes" && new_openable != "no")
			cout << "Incorrect value for openable. Please enter yes or no\n";
		else
			openable = new_openable;
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
	void SetLenght(int new_lenght)
	{
		if (new_lenght < 60 && new_lenght > 400)
			cout << "Incorrect value for lenght. Please enter value from 60 to 400\n";
		else
			lenght = new_lenght;
	}

	void SetWidth(int new_width)
	{
		if (new_width < 60 && new_width > 300)
			cout << "Incorrect value for width. Please enter value from 60 to 300\n";
		else
			width = new_width;
	}

	void SetMaterial(string new_material)
	{
		if (new_material != "wool" && new_material != "cotton" && new_material != "polyester" && new_material != "cashmere")
			cout << "Incorrect value for material. Please enter wool, cotton, polyester or cashmere\n";
		else
			material = new_material;
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
	void SetColor(string new_color)
	{
		if (new_color != "black" && new_color != "white" && new_color != "blue" && new_color != "pink")
			cout << "Incorrect value for color. Please enter black, white, blue or pink\n";
		else
			color = new_color;
	}

	void SetCompany(string new_company)
	{
		if (new_company != "iphone" && new_company != "samsung" && new_company != "xiaomi" && new_company != "huawei")
			cout << "Incorrect value for company. Please enter iphone, samsung, xiaomi or huawei\n";
		else
			company = new_company;
	}

	void SetScreem(string new_screen)
	{
		if (new_screen != "sensor" && new_screen != "buttons")
			cout << "Incorrect value for screen. Please enter sensor or buttons\n";
		else
			screen = new_screen;
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
	space()
	

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