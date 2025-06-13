#include "Window.h"

void Window::SetSize(string size)
{
	if (size != "small" && size != "medium" && size != "big")
		cout << "Incorrect value for size. Please enter small, medium or big\n";
	else
		this->size = size;
}

void Window::SetDirection(string direction)
{
	if (direction != "vertical" && direction != "horizontal")
		cout << "Incorrect value for direction. Please enter vertical or horizontal\n";
	else
		this->direction = direction;
}

void Window::SetOpenable(string openabale)
{
	if (openable != "yes" && openable != "no")
		cout << "Incorrect value for openable. Please enter yes or no\n";
	else
		this->openable = openable;
}

void Window::MakeSound()
{
	cout << "*clunk*\n";
}

void Window::Open()
{
	cout << "the window is opened\n";
}

void Window::Closed()
{
	cout << "the window in closed\n";
}

string Window::GetSize()
{
	return size;
}

string Window::GetDirection()
{
	return direction;
}

string Window::GetOpenable()
{
	return openable;
}