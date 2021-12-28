package Prog_lab9_java;

public class Demo{
	public static void main(String[] args)
	{
		System.out.print("--------Fio class--------\n");
		System.out.print("------Constructors-------\n");
		Fio fio1 = new Fio();
		fio1.display();
		Fio fio2 = new Fio("Popov");
		fio2.display();
		Fio fio3 = new Fio("Ivanov", "Sergey", "Ivanovich");
		fio3.display();

		System.out.print("\n-----Array of objects with constructor----\n");
		Fio[] arrFio = new Fio[3];
		for (int i = 0; i < 3; i++)
		{
			arrFio[i] = new Fio("stated");
			arrFio[i].display();
		}
		/*
		System.out.print("\n---read method---\n");
		if (!myFio.read())
			myFio.display();
		else
			System.out.print("error\n");

		System.out.print("\n------Set methods-------\n");
		if ((myFio.setSurname("Ivanov"))||(myFio.setName("Ivan"))||(myFio.setPatronymic("Ivanovich")))
			System.out.print("error\n");
		else
			myFio.display();
		*/


		System.out.print("\n--------Human class--------\n");
		System.out.print("------Constructors-------\n");
		Human human1 = new Human();
		human1.display();
		Human human2 = new Human(13);
		human2.display();
		Human human3 = new Human(13, 45, 190, 90, 'M', fio3);
		human3.display();

		System.out.print("\n-----Array of objects with constructor----\n");
		Human[] arrHuman = new Human[3];
		for (int i = 0; i < 3; i++)
		{
			arrHuman[i] = new Human(i);
			arrHuman[i].display();
		}
		/*
		System.out.print("\n------read method------\n");
		if (myHuman.read())
			System.out.print("error\n");
		else
			myHuman.display();

		System.out.print("\n------set methods-------\n");
		if (myHuman.setId(1999) || myHuman.setAge(27) || myHuman.setHeight(180) ||
			myHuman.setWeight(80.890) || myHuman.setGender('M'))
			System.out.print("error\n");
		else
			myHuman.display();

		System.out.print("\n----BodyMassIndex calculating----\n");
		System.out.printf("BMI: %d\n", myHuman.getBodyMassIndex());
		*/


		System.out.print("\n--------Student class--------\n");
		System.out.print("------Constructors-------\n");
		Student student1 = new Student();
		student1.display();
		Student student2 = new Student(human2);
		student2.display();
		Student student3 = new Student(2, "Bachelor", "PI-03", "FoIT", human3);
		student3.display();

		System.out.print("\n-----Array of objects with constructor----\n");
		Student[] arrStudent = new Student[3];
		for (int i = 0; i < 3; i++)
		{
			arrStudent[i] = new Student(human2);
			arrStudent[i].display();
		}
		/*
		System.out.print("\n------read method------\n");
		if (myStudent.read())
			System.out.print("error\n");
		else
			myStudent.display();

		System.out.print("\n------Set methods-------\n");
		if (myStudent.setCourse(4) || myStudent.setEduProg("Master") || 
			myStudent.setGroup("CS-91") ||
			myStudent.setFacultyName("FoIT"))
			System.out.print("error\n");
		else
			myStudent.display();
		*/


		System.out.print("\n--------Teacher class--------\n");
		System.out.print("------Constructors-------\n");
		Teacher teacher1 = new Teacher();
		teacher1.display();
		Teacher teacher2 = new Teacher(human2);
		teacher2.display();
		Teacher teacher3 = new Teacher(18, "Candidate of Mathematical Sciences", "FoMS", human3);
		teacher3.display();

		System.out.print("\n-----Array of objects with constructor----\n");
		Teacher[] arrTeacher = new Teacher[3];
		for (int i = 0; i < 3; i++)
		{
			arrTeacher[i] = new Teacher(human2);
			arrTeacher[i].display();
		}
		/*
		System.out.print("\n------read method------\n");
		if (myTeacher.read())
			System.out.print("error\n");
		else
			myTeacher.display();

		System.out.print("\n------Set methods-------\n");
		if (myTeacher.setWorkExp(30) || myTeacher.setDegree("Doctor of Mathematical Sciences") || myTeacher.setFacultyName("SMTH"))
			System.out.print("error\n");
		else
			myTeacher.display();
		*/
		/*
		System.out.print("\nStatic method demo\n");
		Fio myFio = new Fio();
		myFio.init("Popov", "Alexandr", "Dmitrievich");
		Human myHuman = new Human();
		myHuman.setAll(1913, 43, 182, 70.89, 'M', myFio);
		Teacher myTeacher = new Teacher();
		myTeacher.setAll(18, "Candidate of Mathematical Sciences", "FoMS", myHuman);
		System.out.print("Teacher:\n");
		myTeacher.display();
		System.out.print("\nAnd his salary is...\n");
		System.out.print(Teacher.GetSalaryOf(myTeacher));
		*/


		System.out.print("\n--------Faculty class--------\n");
		System.out.print("------Constructors-------\n");
		Faculty faculty1 = new Faculty();
		faculty1.display();
		Faculty faculty2 = new Faculty("FoMS");
		faculty2.display();
		Faculty faculty3 = new Faculty("FoMS", 200, 180, 20, 40, 30, 10, 30);
		faculty3.display();

		System.out.print("\n-----Array of objects with constructor----\n");
		Faculty[] arrFaculty = new Faculty[3];
		for (int i = 0; i < 3; i++)
		{
			arrFaculty[i] = new Faculty("stated");
			arrFaculty[i].display();
		}
		/*
		System.out.print("\n------Shortcut-set methods-------\n");
		myFaculty.setStudentsInfo(300, 270, 30);
		myFaculty.setTeachersInfo(40, 33, 7);
		if (myFaculty.setFacultyName("Fo****IT"))
			System.out.print("Error\n");
		else
			myFaculty.display();

		System.out.print("\n------read method-------\n");
		if(myFaculty.read())
			System.out.print("error\n");
		else
			myFaculty.display();
	
		System.out.print("\n----processing by methods----\n");
		System.out.printf("Percent of masters on faculty: %.2f\n", myFaculty.getPercentOfMasters());
		System.out.printf("Percent of doctors on faculty: %.2f\n", myFaculty.getPercentOfDoctors());
		System.out.printf("Students to teachers quantity: %.2f\n", myFaculty.getStudToTeachRatio());

		*/
		/*
		System.out.print("\n------array of objects------\n");
		int sumOfStudents = 0;
		Random rnd = new Random();
		rnd.setSeed(251);

		Faculty[] objArray = new Faculty[3];
		for (int i = 0; i < objArray.length; i++)
		{
			objArray[i] = new Faculty();
			objArray[i].init("smth", rnd.nextInt(500),
					rnd.nextInt(450), rnd.nextInt(50),
					rnd.nextInt(100), rnd.nextInt(80),
					rnd.nextInt(20), rnd.nextInt(50));
			sumOfStudents += objArray[i].getQuantityOfStudents();
			objArray[i].display();
		}
		System.out.printf("\nTotal quantity of students on all faculties: %d\n", sumOfStudents);
		System.out.print("\nLet's compare first and second faculties to find the one...\n");
		System.out.print("...that have the largest number of candidates on it.\n");
		System.out.print("And the answer is:\n");
		objArray[0].getWithMoreCandidates(objArray[1]).display();
		*/
	}
}