#include "Human.h"
#include <cmath>
#include <string>
#include <iostream>


bool Human::SetId(int buf)
{
	if (buf < 0 || buf > 9999)
		return (true);
	else
	{
		id = buf;
		return (false);
	}
}

bool Human::SetAge(int buf)
{
	if (buf < 0 || buf > 200)
		return (true);
	else
	{
		age = buf;
		return (false);
	}
}

bool Human::SetHeight(int buf)
{
	if (buf < 40 || buf > 300)
		return (true);
	else
	{
		height = buf;
		return (false);
	}
}

bool Human::SetWeight(double buf)
{
	buf = round(buf * 100) / 100;
	if (buf < 0 || buf > 650)
		return (true);
	else
	{
		weight = buf;
		return (false);
	}
}

bool Human::SetGender(char buf)
{
	if (buf == 'M' || buf == 'F')
	{
		gender = buf;
		return (false);
	}
	else
		return (true);
}

int Human::GetId()
{
	return (id);
}

int Human::GetAge()
{
	return (age);
}

int Human::GetHeight()
{
	return (height);
}

double Human::GetWeight()
{
	return (weight);
}

char Human::GetGender()
{
	return (gender);
}

Human::Human()
{	
	id = 0;
	age = 0;
	height = 40;
	weight = 0;
	gender = 'M';
}

Human::Human(int bufId)
{
	id = 0;
	age = 0;
	height = 40;
	weight = 0;
	gender = 'M';

	SetId(bufId);
}

Human::Human(int bufId, int bufAge, int bufHeight, double bufWeight, char bufGender, Fio bufFio)
{
	Human check;

	if (check.SetId(bufId) || check.SetAge(bufAge) || check.SetHeight(bufHeight) ||
		check.SetWeight(bufWeight) || check.SetGender(bufGender))
	{
		id = 0;
		age = 0;
		height = 40;
		weight = 0;
		gender = 'M';
	}
	else
	{
		id = bufId;
		age = bufAge;
		height = bufHeight;
		weight = bufWeight;
		gender = bufGender;
		fioField = bufFio;
	}
}


bool Human::Read()
{
	Human check;
	int bufInt;
	double bufDouble;
	char bufChar;

	cout << "Enter id:" << endl;
	cin >> bufInt;	
	if (check.SetId(bufInt))
		return (true);
		
	cout << "Enter age:" << endl;
	cin >> bufInt;
	if (check.SetAge(bufInt))
		return (true);
				
	cout << "Enter height:" << endl;
	cin >> bufInt;
	if (check.SetHeight(bufInt))
		return (true);
			
	cout << "Enter weight:" << endl;
	cin >> bufDouble;	
	if (check.SetWeight(bufDouble))
		return (true);

	cout << "Enter gender:" << endl;
	cin >> bufChar;
	cin.ignore();
	if (check.SetGender(bufChar))
		return(true);

	if (check.fioField.Read())
		return (true);

	id = check.GetId();
	age = check.GetAge();
	height = check.GetHeight();
	weight = check.GetWeight();
	gender = check.GetGender();
	fioField = check.fioField;
	return(false);								
}

void Human::Display()
{
	cout << "id: " << id << endl;
	cout << "age: " << age << endl;
	cout << "height: " << height << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "weight: " << weight << endl;
	cout.unsetf(ios::fixed);
	cout << "gender: " << gender << endl;
	fioField.Display();
}
