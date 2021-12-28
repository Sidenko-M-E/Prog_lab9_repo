#include "Fio.h"
#include <iostream>


bool Fio::SetSurname(string bufString)
{ 
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+1234567890-=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}
	
	surname = bufString;
	return (false);
}

bool Fio::SetName(string bufString) 
{
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+1234567890-=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}

	name = bufString;
	return (false);
}

bool Fio::SetPatronymic(string bufString) 
{
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+1234567890-=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}

	patronymic = bufString;
	return (false);
}

string Fio::GetSurname()
{
	return (surname);
}

string Fio::GetName() 
{ 
	return (name);
}

string Fio::GetPatronymic() 
{ 
	return (patronymic);
}

Fio::Fio()
{
	surname = "unstated";
	name = "unstated";
	patronymic = "unstated";
}

Fio::Fio(string bufSurname)
{
	surname = "unstated";
	name = "unstated";
	patronymic = "unstated";

	SetSurname(bufSurname);
}

Fio::Fio(string bufSurname, string bufName, string bufPatronymic)
{
	Fio check;

	if (check.SetSurname(bufSurname) || check.SetName(bufName) || check.SetPatronymic(bufPatronymic))
	{
		surname = "unstated";
		name = "unstated";
		patronymic = "unstated";
	}
	else
	{
		surname = bufSurname;
		name = bufName;
		patronymic = bufPatronymic;
	}
}

bool Fio::Read()
{
	Fio check;
	string bufString;

	cout << "Enter surname:" << endl;
	getline(cin, bufString);
	if (check.SetSurname(bufString))
		return (true);

	cout << "Enter name:" << endl;
	getline(cin, bufString);
	if (check.SetName(bufString))
		return (true);

	cout << "Enter patronymic:" << endl;
	getline(cin, bufString);
	if (check.SetPatronymic(bufString))
		return (true);

	surname = check.GetSurname();
	name = check.GetName();
	patronymic = check.GetPatronymic();
	return (false);
}

void Fio::Display()
{
	cout << "FIO:" + surname + " " + name + " " + patronymic << endl;
}

