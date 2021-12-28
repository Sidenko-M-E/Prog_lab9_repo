#include "Student.h"
#include <iostream>

bool Student::SetCourse(int buf)
{
	if (buf < 0 || buf > 6)
		return (true);
	else
	{
		course = buf;
		return (false);
	}
}

bool Student::SetEduProg(string bufString)
{
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+1234567890-=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}

	eduProg = bufString;
	return (false);
}

bool Student::SetGroup(string bufString)
{
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}

	group = bufString;
	return (false);
}

bool Student::SetFacultyName(string bufString)
{
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+1234567890-=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}

	facultyName = bufString;
	return (false);
}

int Student::GetCourse()
{
	return (course);
}

string Student::GetEduProg()
{
	return (eduProg);
}

string Student::GetGroup()
{
	return (group);
}

string Student::GetFacultyName()
{
	return (facultyName);
}


Student::Student()
{
	course = 0;
	eduProg = "unstated";
	group = "unstated";
	facultyName = "unstated";
}

Student::Student(Human bufHuman)
{
	course = 0;
	eduProg = "unstated";
	group = "unstated";
	facultyName = "unstated";
	humanField = bufHuman;
}

Student::Student(int bufCourse, string bufEduProg, string bufGroup, string bufFacultyName, Human bufHuman)
{
	Student check;

	if (check.SetCourse(bufCourse) || check.SetEduProg(bufEduProg) || check.SetGroup(bufGroup) ||
		check.SetFacultyName(bufFacultyName))
	{
		course = 0;
		eduProg = "unstated";
		group = "unstated";
		facultyName = "unstated";
	}
	else
	{
		course = bufCourse;
		eduProg = bufEduProg;
		group = bufGroup;
		facultyName = bufFacultyName;
	}
}

bool Student::Read()
{
	Student check;
	int bufInt;
	string bufString;

	cout << "Enter course:\n";
	cin >> bufInt;
	cin.ignore();
	if (check.SetCourse(bufInt))
		return (true);
		
	cout << "Enter education programm:\n";
	getline(cin, bufString);
	if (check.SetEduProg(bufString))
		return (true);

	cout << "Enter group:\n";
	getline(cin, bufString);
	if (check.SetGroup(bufString))
		return (true);
				
	cout << "Enter faculty name:\n";
	getline(cin, bufString);
	if (check.SetFacultyName(bufString))
		return (true);

	if (check.humanField.Read())
		return (true);

	course = check.GetCourse();
	eduProg = check.GetEduProg();
	group = check.GetGroup();
	facultyName = check.GetFacultyName();
	humanField = check.humanField;
	return(false);
}

void Student::Display()
{
	cout << "course: " << course << endl;
	cout << "direction of preparation: " << eduProg << endl;
	cout << "group: " << group << endl;
	cout << "faculty name: " << facultyName << endl;
	humanField.Display();
}
