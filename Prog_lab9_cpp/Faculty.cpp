#include "Faculty.h"
#include <iostream>


bool Faculty::SetFacultyName(string bufString)
{
	if (bufString.empty())
		return (true);

	char invalidSymbols[] = "!@#$%^&*()_+1234567890-=\"¹;:?*,./'][{}<>~` ";
	for (char symb : invalidSymbols)
	{
		if (bufString.find(symb) != (-1))
			return (true);
	}
	
	/*code was commented for shallow copy demonstation
	if (facultyName)
		delete facultyName;
	facultyName = NULL;
	facultyName = new char[strlen(bufString.c_str()) + 1];
	*/
	strcpy(facultyName, bufString.c_str());
	return (false);
}

bool Faculty::SetQuantityOfStudents(int buf)
{
	if (buf < 0 || buf > 1000)
		return (true);
	else
	{
		quantityOfStudents = buf;
		return (false);
	}
}

bool Faculty::SetQuantityOfBachelors(int buf)
{
	if (buf < 0 || buf > 1000)
		return (true);
	else
	{
		quantityOfBachelors = buf;
		return (false);
	}
}

bool Faculty::SetQuantityOfMasters(int buf)
{
	if (buf < 0 || buf > 1000)
		return (true);
	else
	{
		quantityOfMasters = buf;
		return (false);
	}
}

bool Faculty::SetQuantityOfTeachers(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		quantityOfTeachers = buf;
		return (false);
	}
}

bool Faculty::SetQuantityOfCandidates(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		quantityOfCandidates = buf;
		return (false);
	}
}

bool Faculty::SetQuantityOfDoctors(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		quantityOfDoctors = buf;
		return (false);
	}
}

bool Faculty::SetQuantityOfDisciplines(int buf)
{
	if (buf < 0 || buf > 100)
		return (true);
	else
	{
		quantityOfDisciplines = buf;
		return (false);
	}
}

bool Faculty::SetStudentsInfo(int allQuantity, int bachelorsQuantity, int mastersQuantity)
{
	if (allQuantity < 0 || allQuantity > 1000 || bachelorsQuantity < 0 || bachelorsQuantity > 1000 || mastersQuantity < 0 || mastersQuantity > 1000)
		return (true);
	else
	{
		quantityOfStudents = allQuantity;
		quantityOfBachelors = bachelorsQuantity;
		quantityOfMasters = mastersQuantity;
		return (false);
	}
}

bool Faculty::SetTeachersInfo(int allQuantity, int candidatesQuantity, int doctorsQuantity)
{
	if (allQuantity < 0 || allQuantity > 100 || candidatesQuantity < 0 || candidatesQuantity > 100 || doctorsQuantity < 0 || doctorsQuantity > 100)
		return (true);
	else
	{
		quantityOfTeachers = allQuantity;
		quantityOfCandidates = candidatesQuantity;
		quantityOfDoctors = doctorsQuantity;
		return (false);
	}
}



string Faculty::GetFacultyName()
{
	return (string(facultyName));
}

int Faculty::GetQuantityOfStudents()
{
	return (quantityOfStudents);
}

int Faculty::GetQuantityOfBachelors()
{
	return (quantityOfBachelors);
}

int Faculty::GetQuantityOfMasters()
{
	return (quantityOfMasters);
}

int Faculty::GetQuantityOfTeachers()
{
	return (quantityOfTeachers);
}

int Faculty::GetQuantityOfCandidates()
{
	return (quantityOfCandidates);
}

int Faculty::GetQuantityOfDoctors()
{
	return (quantityOfDoctors);
}

int Faculty::GetQuantityOfDisciplines()
{
	return (quantityOfDisciplines);
}

double Faculty::GetProcentOfMasters()
{
	return(((double)quantityOfMasters) / ((double)quantityOfStudents) * 100);
}

double Faculty::GetProcentOfDoctors()
{
	return(((double)quantityOfDoctors) / ((double)quantityOfTeachers) * 100);
}

double Faculty::GetStudToTeachRatio()
{
	return(((double)quantityOfStudents) / ((double)quantityOfTeachers));
}

Faculty Faculty::GetWithMoreCandidates(Faculty buf)
{
	if ((*this).GetQuantityOfCandidates() >= buf.GetQuantityOfCandidates())
		return (*this);
	else
		return (buf);
}

void Faculty::IsHavingEnoughCandidates(bool *result)
{
	if (quantityOfCandidates > 30)
		*result = true;
	else
		*result = false;
}

void Faculty::IsHavingEnoughCandidates(bool &result)
{
	if (quantityOfCandidates > 30)
		result = true;
	else
		result = false;
}

Faculty::Faculty()
{
	facultyName  = new char[strlen("unstated") + 1];
	strcpy(facultyName, "unstated");
	quantityOfStudents = 0;
	quantityOfBachelors = 0;
	quantityOfMasters = 0;
	quantityOfTeachers = 0;
	quantityOfCandidates = 0;
	quantityOfDoctors = 0;
	quantityOfDisciplines = 0;
}

Faculty::Faculty(string bufFacultyName)
{
	facultyName = new char[strlen(bufFacultyName.c_str()) + 1];
	strcpy(facultyName, bufFacultyName.c_str());
	quantityOfStudents = 0;
	quantityOfBachelors = 0;
	quantityOfMasters = 0;
	quantityOfTeachers = 0;
	quantityOfCandidates = 0;
	quantityOfDoctors = 0;
	quantityOfDisciplines = 0;
}

Faculty::Faculty(string bufFacultyName, int studentsQuantity, int bachelorsQuantity, int mastersQuantity, 
	int teachersQuantity, int candidatesQuantity, int doctorsQuanity, int discpilinesQuantity)
{
	Faculty check;

	if (check.SetFacultyName(bufFacultyName) || check.SetQuantityOfStudents(studentsQuantity) ||
		check.SetQuantityOfBachelors(bachelorsQuantity) || check.SetQuantityOfMasters(mastersQuantity) ||
		check.SetQuantityOfTeachers(teachersQuantity) || check.SetQuantityOfCandidates(candidatesQuantity) ||
		check.SetQuantityOfDoctors(doctorsQuanity) || check.SetQuantityOfDisciplines(discpilinesQuantity))
	{
		facultyName = new char[strlen("unstated") + 1];
		strcpy(facultyName, "unstated");
		quantityOfStudents = 0;
		quantityOfBachelors = 0;
		quantityOfMasters = 0;
		quantityOfTeachers = 0;
		quantityOfCandidates = 0;
		quantityOfDoctors = 0;
		quantityOfDisciplines = 0;
	}
	else
	{
		facultyName = new char[strlen(bufFacultyName.c_str()) + 1];
		strcpy(facultyName, bufFacultyName.c_str());
		quantityOfStudents = studentsQuantity;
		quantityOfBachelors = bachelorsQuantity;
		quantityOfMasters = mastersQuantity;
		quantityOfTeachers = teachersQuantity;
		quantityOfCandidates = candidatesQuantity;
		quantityOfDoctors = doctorsQuanity;
		quantityOfDisciplines = discpilinesQuantity;
	}
}

Faculty::Faculty(const Faculty& bufFaculty)
{
	facultyName = bufFaculty.facultyName;
	quantityOfStudents = bufFaculty.quantityOfStudents*2;
	quantityOfBachelors = bufFaculty.quantityOfBachelors*2;
	quantityOfMasters = bufFaculty.quantityOfMasters*2;
	quantityOfTeachers = bufFaculty.quantityOfTeachers*2;
	quantityOfCandidates = bufFaculty.quantityOfCandidates*2;
	quantityOfDoctors = bufFaculty.quantityOfDoctors*2;
	quantityOfDisciplines = bufFaculty.quantityOfDisciplines*2;
}

Faculty& Faculty::operator=(Faculty& bufFaculty)
{
	if (facultyName)
		delete facultyName;
	facultyName = NULL;

	quantityOfStudents = bufFaculty.quantityOfStudents;
	quantityOfBachelors = bufFaculty.quantityOfBachelors;
	quantityOfMasters = bufFaculty.quantityOfMasters;
	quantityOfTeachers = bufFaculty.quantityOfTeachers;
	quantityOfCandidates = bufFaculty.quantityOfCandidates;
	quantityOfDoctors = bufFaculty.quantityOfDoctors;
	quantityOfDisciplines = bufFaculty.quantityOfDisciplines;

	facultyName = new char[strlen(bufFaculty.GetFacultyName().c_str()) + 1];
	strcpy(facultyName, bufFaculty.GetFacultyName().c_str());
	return (*this);
}


bool Faculty::Read()
{
	Faculty check;
	string bufString;
	int bufInt;

	cout << "Enter faculty name:\n";
	getline(cin, bufString);
	if (check.SetFacultyName(bufString))
		return (true);
	
	cout << "Enter quantity of students:\n";
	cin >> bufInt;
	if (check.SetQuantityOfStudents(bufInt))
		return (true);
			
	cout << "Enter quantity of bachelors:\n";
	cin >> bufInt;
	if (check.SetQuantityOfBachelors(bufInt))
		return (true);
					
	cout << "Enter quantity of masters:\n";
	cin >> bufInt;
	if (check.SetQuantityOfMasters(bufInt))
		return (true);
								
	cout << "Enter quantity of teachers:\n";
	cin >> bufInt;
	if (check.SetQuantityOfTeachers(bufInt))
		return (true);
									
	cout << "Enter quantity of candidates:\n";
	cin >> bufInt;
	if (check.SetQuantityOfCandidates(bufInt))
		return (true);
			
	cout << "Enter quantity of doctors:\n";
	cin >> bufInt;
	if (check.SetQuantityOfDoctors(bufInt))
		return (true);
													
	cout << "Enter quantity of disciplines:\n";
	cin >> bufInt;
	if (check.SetQuantityOfDisciplines(bufInt))
		return (true);
						
	facultyName = new char[strlen(check.GetFacultyName().c_str()) + 1];
	strcpy(facultyName, check.GetFacultyName().c_str());
	quantityOfStudents = check.GetQuantityOfStudents();
	quantityOfBachelors = check.GetQuantityOfBachelors();
	quantityOfMasters = check.GetQuantityOfMasters();
	quantityOfTeachers = check.GetQuantityOfTeachers();
	quantityOfCandidates = check.GetQuantityOfCandidates();
	quantityOfDoctors = check.GetQuantityOfDoctors();
	quantityOfDisciplines = check.GetQuantityOfDisciplines();
	return (false);												
}

void Faculty::Display()
{
	cout << "faculty name: " << facultyName << endl;
	cout << "quantity of students:" << quantityOfStudents << endl;
	cout << "quantity of bachelors: " << quantityOfBachelors << endl;
	cout << "quantity of masters: " << quantityOfMasters << endl;

	cout << "quantity of teachers: " << quantityOfTeachers << endl;
	cout << "quantity of candidates: " << quantityOfCandidates << endl;
	cout << "quantity of doctors: " << quantityOfDoctors << endl;

	cout << "quantity of disciplines: " << quantityOfDisciplines << endl;
}
