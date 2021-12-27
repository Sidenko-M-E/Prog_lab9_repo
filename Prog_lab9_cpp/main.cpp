#include <conio.h>
#include <iostream>
#include "Fio.h"
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Faculty.h"

int main()
{
	cout << "--------Fio class--------" << endl;
	cout << "------Constructors-------" << endl;
	Fio fio1;
	fio1.Display();
	Fio fio2("Popov");
	fio2.Display();
	Fio fio3("Ivanov", "Sergey" , "Ivanovich");
	fio3.Display();

	cout << endl << "------Constructors of dynamic-------" << endl;
	Fio* dynamicFio1 = new Fio();
	dynamicFio1->Display();
	Fio* dynamicFio2 = new Fio("Dynamicov");
	dynamicFio2->Display();
	Fio* dynamicFio3 = new Fio("Dynamicov", "Dynamic", "Dynamicovich");
	dynamicFio3->Display();

	cout << endl << "\n-----Array of objects with constructor----" << endl;
	string filler;
	Fio arrayFio[3] = {filler = "first", filler = "second", filler = "third"};
	for (int i = 0; i < 3; i++)
		arrayFio[i].Display();
	/*
	cout << endl << "---Read method---" << endl;
	if (!myFio.Read())
		myFio.Display();
	else
		cout << "error" << endl;

	cout << endl << "------Set methods-------" << endl;
	if (myFio.SetSurname("Ivanov") || myFio.SetName("Ivan") || myFio.SetPatronymic("Ivanovich"))
		cout << "error" << endl;
	else
		myFio.Display();
	*/

	cout << endl << "--------Human class--------" << endl;
	cout << "------Constructors-------" << endl;
	Human human1;
	human1.Display();
	Human human2(3);
	human2.Display();
	Human human3(1913, 19, 182, 70, 'F', fio3);
	human3.Display();

	cout << endl << "------Constructors of dynamic-------" << endl;
	Human* dynamicHuman1 = new Human();
	dynamicHuman1->Display();
	Human* dynamicHuman2 = new Human(1988);
	dynamicHuman2->Display();
	Human* dynamicHuman3 = new Human(1913, 19, 182, 70, 'F', fio3);
	dynamicHuman3->Display();

	cout << endl << "\n-----Array of objects with constructor----" << endl;
	Human arrayHuman[3] = { 3, 4, 5};
	for (int i = 0; i < 3; i++)
		arrayHuman[i].Display();
	/*
	cout << "\n------Read method------\n";
	if (myHuman.Read())
		cout << "error\n";
	else
		myHuman.Display();

	cout << "\n------Set methods-------\n";
	if (myHuman.SetId(1999) || myHuman.SetAge(27) || myHuman.SetHeight(180) ||
		myHuman.SetWeight(80.890) || myHuman.SetGender('M'))
		cout << "error\n";
	else
		myHuman.Display();
	*/

	
	cout << "\n--------Student class--------\n";
	cout << "------Constructors-------" << endl;
	Student student1;
	student1.Display();
	Student student2(human3);
	student2.Display();
	Student student3(3, "Bachelor", "PI-03", "FoIT", human3);
	student3.Display();

	cout << endl << "------Constructors of dynamic-------" << endl;
	Student* dynamicStudent1 = new Student();
	dynamicStudent1->Display();
	Student* dynamicStudent2 = new Student(human3);
	dynamicHuman2->Display();
	Student* dynamicStudent3 = new Student(3, "Bachelor", "PI-03", "FoIT", human3);
	dynamicHuman3->Display();

	cout << endl << "\n-----Array of objects with constructor----" << endl;
	Student arrayStudent[3] = {human1, human2, human3};
	for (int i = 0; i < 3; i++)
		arrayStudent[i].Display();
	/*
	cout << "\n------Read method------\n";
	if (myStudent.Read())
		cout << "error\n";
	else
		myStudent.Display();

	cout << "\n------Set methods-------\n";
	if (myStudent.SetCourse(4) || myStudent.SetEduProg("Master") || 
		myStudent.SetGroup("CS-91") ||
		myStudent.SetFacultyName("FoIT"))
		cout << "error\n";
	else
		myStudent.Display();
	*/

	
	cout << "\n--------Teacher class--------\n";
	cout << "------Constructors-------" << endl;
	Teacher teacher1;
	teacher1.Display();
	Teacher teacher2(human3);
	teacher2.Display();
	Teacher teacher3(18, "Doctor of Mathematical Sciences", "FoMS", human3);
	teacher3.Display();

	cout << endl << "------Constructors of dynamic-------" << endl;
	Teacher* dynamicTeacher1 = new Teacher();
	dynamicTeacher1->Display();
	Teacher* dynamicTeacher2 = new Teacher(human3);
	dynamicTeacher2->Display();
	Teacher* dynamicTeacher3 = new Teacher(18, "Doctor of Mathematical Sciences", "FoMS", human3);
	dynamicTeacher3->Display();

	cout << endl << "-----Array of objects with constructor----" << endl;
	Teacher arrayTeacher[3] = { human1, human2, human3 };
	for (int i = 0; i < 3; i++)
		arrayTeacher[i].Display();
	/*
	cout << "\n------Read method------\n";
	if (myTeacher.Read())
		cout << "error\n";
	else
		myTeacher.Display();

	cout << "\n------Set methods-------\n";
	if (myTeacher.SetWorkExp(30) || myTeacher.SetDegree("Doctor of Mathematical Sciences") || myTeacher.SetFacultyName("FoMS"))
		cout << "error\n";
	else
		myTeacher.Display();
	/*
	cout << "\n----operator overloading demo----\n";
	Teacher demoTeacher;
	demoTeacher.Init(40, "Candidate of Mathematical Sciences",
		"FoMS", myHuman);
	cout << "demoTeacher.WorkExp = " << demoTeacher.GetWorkExp() << endl;

	demoTeacher = demoTeacher + 3;
	cout << "\ndemoTeacher + 3 = new object of Teacher class:\n";
	demoTeacher.Display();

	cout << "\n4 + demoTeacher = " << 4 + demoTeacher << " of int\n";

	cout << "\ndemoTeacher++\n";
	demoTeacher++;
	demoTeacher.Display();

	cout << "\n++demoTeacher:\n";
	++demoTeacher;
	demoTeacher.Display();
	*/

	/*
	cout << "\nStatic method demo\n";
	Fio myFio;
	myFio.Init("Popov", "Alexandr", "Dmitrievich");
	Human myHuman;
	myHuman.Init(1913, 43, 182, 70.89, 'F', myFio);
	Teacher myTeacher;
	myTeacher.Init(18, "Candidate of Mathematical Sciences", "FoMS", myHuman);
	cout << "Teacher:\n";
	myTeacher.Display();
	cout << "\nAnd his salary is...\n";
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << myTeacher.GetSalaryOf(myTeacher);
	cout.unsetf(ios::fixed);
	*/
	
	cout << "\n------Faculty class----------\n";
	cout << "------Constructors-------" << endl;
	Faculty faculty1;
	faculty1.Display();
	Faculty faculty2("FoMS");
	faculty2.Display();
	Faculty faculty3("FoMS", 200, 150, 50, 30, 20, 10, 20);
	faculty3.Display();

	cout << endl << "------Constructors of dynamic-------" << endl;
	Faculty* dynamicFaculty1 = new Faculty();
	dynamicFaculty1->Display();
	Faculty* dynamicFaculty2 = new Faculty("FoMS");
	dynamicFaculty2->Display();
	Faculty* dynamicFaculty3 = new Faculty("FoMS", 200, 150, 50, 30, 20, 10, 20);
	dynamicFaculty3->Display();
	
	cout << endl << "-----Array of objects with constructor----" << endl;
	Faculty arrayFaculty[3] = {filler = "FoHS", filler = "FoMS", filler = "FoIT"};
	for (int i = 0; i < 3; i++)
		arrayFaculty[i].Display();

	cout << "-----Copy Constructor-----\n";
	cout << "Origin object:\n";
	faculty2.Display();
	cout << "\n Copied object:\n";
	Faculty copyFaculty = faculty2;
	copyFaculty.Display();
	cout << "\nChange facultyName in origin object to FoHS:\n";
	faculty2.SetFacultyName("FoHS");
	cout << "State of copied object has changed:\n";
	copyFaculty.Display();
	cout << "It's a shallow copy\n";

	cout << "-----Overloading assignment operator-----\n";
	cout << "Origin object:\n";
	dynamicFaculty2->Display();
	cout << "\nAssignment object:\n";
	dynamicFaculty3->Display();
	cout << "\nResult of assignment\n";
	*dynamicFaculty2 = *dynamicFaculty3;
	dynamicFaculty2->Display();
	cout << "\nChange facultyName in assignment object to FoHS:\n";
	dynamicFaculty3->SetFacultyName("FoHS");
	cout << "\nState of origin object hasn't changed:\n";
	dynamicFaculty2->Display();
	cout << "It's a deep copy\n";


	/*
	cout << "\n------Read method------\n";
	if (myFaculty.Read())
		cout << "error\n";
	else
		myFaculty.Display();

	cout << "\n------Shortcut-Set methods-------\n";
	myFaculty.SetStudentsInfo(300, 270, 30);
	myFaculty.SetTeachersInfo(40, 33, 7);
	myFaculty.Display();
	*/
	/*
	cout << "\n----processing by functions----\n";
	cout.precision(2);
	cout << "Procent of masters on faculty: " << myFaculty.GetProcentOfMasters() << endl;
	cout << "Procent of doctors on faculty: " << myFaculty.GetProcentOfDoctors() << endl;
	cout << "Students to teachers ratio: " << myFaculty.GetStudToTeachRatio() << endl;
	*/
	/*
	cout << "\nLet's compare two faculties to find the one...\n";
	cout << "...that have the largest number of candidates on it.\n";
	Faculty demoFaculty;
	demoFaculty.Init("FoMS", 230, 175, 15, 30, 45, 15, 80);
	cout << "First faculty:\n";
	myFaculty.Display();
	cout << "Second faculty:\n";
	demoFaculty.Display();
	cout << "And result is...\n";
	(myFaculty.GetWithMoreCandidates(demoFaculty)).Display();
	*/
	/*
	cout << "\nLets check the faculties to find the one...\n";
	cout << "...that have enough candidates on it.\n";
	bool result;

	cout << "\nFirst faculty:\n";
	myFaculty.Display();
	cout << "\nLets check the first faculty:\n";
	myFaculty.IsHavingEnoughCandidates(&result);
	if (result)
		cout << "First faculty have enough candidates.\n";
	else
		cout << "First faculty have not enough candidates.\n";

	cout << "\nSecond faculty:\n";
	Faculty demoFaculty;
	demoFaculty.Init("FoMS", 230, 175, 15, 30, 45, 15, 80);
	demoFaculty.Display();
	cout << "\nLets check the second faculty\n";
	demoFaculty.IsHavingEnoughCandidates(result);
	if (result)
		cout << "Second faculty have enough candidates.\n";
	else
		cout << "Second faculty have not enough candidates.\n";
	*/	
	/*
	cout << "\n------dynamic memmory demo------\n";
	cout << "----dynamic array of objects----\n";
	int count;
	printf("Enter the number of objects, that you want to create:\n");
	cin >> count;

	//dynamic_array[i] - объект класса 
	Faculty* dynamicArray = new Faculty[count];//динамический массив объектов класса faculty.
	for (int i = 0; i < count; i++) 
	{
		dynamicArray[i].Init("SMTH", i, i, i, i, i, i, i);
		dynamicArray[i].Display();
		cout << "******************\n";
	}
	delete[] dynamicArray;
	
	cout << "\n----array of 5 dynamic objects----\n\n";
	//создание 5 указателей на объекты класса faculty
	//содержимое этих указателей не определено!!!
	//array_of_dynamic[i] - указатель на объект
	Faculty* arrayOfDynamic[5];
	for (int i = 0; i < 5; i++) 
	{
		//определяем содержимое каждого из указателей
		arrayOfDynamic[i] = new Faculty;
		arrayOfDynamic[i]->Init("SMTH", i, i, i, i, i, i, i);
		(*arrayOfDynamic[i]).Display(); //(*smth). взаимозаменяемо с smth->
		cout << "******************\n";
		delete arrayOfDynamic[i];
	}
	*/
	//Конец демонстрационного варианта
	cout << "\nPress any key to exit.\n";
	_getch();
}
