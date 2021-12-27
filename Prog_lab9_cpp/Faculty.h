#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
using namespace std;


class Faculty
{
private:
	char* facultyName;
	int quantityOfStudents;
	int quantityOfBachelors;
	int quantityOfMasters;
	int quantityOfTeachers;
	int quantityOfCandidates;
	int quantityOfDoctors;
	int quantityOfDisciplines;

public:
	bool SetFacultyName(string bufString);
	bool SetQuantityOfStudents(int buf);
	bool SetQuantityOfBachelors(int buf);
	bool SetQuantityOfMasters(int buf);
	bool SetQuantityOfTeachers(int buf);
	bool SetQuantityOfCandidates(int buf);
	bool SetQuantityOfDoctors(int buf);
	bool SetQuantityOfDisciplines(int buf);

	bool SetStudentsInfo(int allQuantity, int bachelorsQuantity, int mastersQuantity);
	bool SetTeachersInfo(int allQuantity, int candidatesQuantity, int doctorsQuantity);

	string GetFacultyName();
	int GetQuantityOfStudents();
	int GetQuantityOfBachelors();
	int GetQuantityOfMasters();
	int GetQuantityOfTeachers();
	int GetQuantityOfCandidates();
	int GetQuantityOfDoctors();
	int GetQuantityOfDisciplines();

	double GetProcentOfMasters();
	double GetProcentOfDoctors();
	double GetStudToTeachRatio();
	Faculty GetWithMoreCandidates(Faculty buf);
	void IsHavingEnoughCandidates(bool *result);
	void IsHavingEnoughCandidates(bool &result);

	Faculty();
	Faculty(string bufFacultyName);
	Faculty(string bufFacultyName, int studentsQuantity,
		int bachelorsQuantity, int mastersQuantity,
		int teachersQuantity, int candidatesQuantity,
		int doctorsQuanity, int discpilinesQuantity);
	Faculty(const Faculty& bufFaculty);
	Faculty& operator= (Faculty& bufFaculty);

	bool Read();
	void Display();
};
