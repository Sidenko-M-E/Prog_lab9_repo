package Prog_lab9_java;

import java.util.*;

public class Teacher 
{
	//Static fields and methods
	private static final double baseSalary = 23456.78;
	static public double GetSalaryOf(Teacher bufTeacher)
	{
		double result = 0;
		int bufWorkExp = bufTeacher.getWorkExp();
		if (bufWorkExp >= 0 && bufWorkExp <= 3)
			result = baseSalary;

		if (bufWorkExp >= 4 && bufWorkExp <= 7)
			result = baseSalary * 1.3;

		if (bufWorkExp >= 8 && bufWorkExp <= 14)
			result = baseSalary * 1.6;

		if (bufWorkExp >= 15 && bufWorkExp <= 24)
			result = baseSalary * 2.2;

		if (bufWorkExp >= 25)
			result = baseSalary * 3.1;

		result = ((double)(Math.round(result * 100)) / 100);
		return (result);
	}

	//Attributes
	private int workExp;
	private String degree;
	private String facultyName;
	public Human humanField;

	//Constructors
	public Teacher()
	{
		workExp = 0;
		degree = "unstated";
		facultyName = "unstated";
		humanField = new Human();
	}

	public Teacher(Human bufHuman)
	{
		workExp = 0;
		degree = "unstated";
		facultyName = "unstated";
		humanField = new Human(bufHuman.getId(), bufHuman.getAge(),
				bufHuman.getHeight(), bufHuman.getWeight(),
				bufHuman.getGender(), bufHuman.fioField);
	}

	public Teacher(int bufWorkExp, String bufDegree, String bufFacultyName, Human bufHuman)
	{
		Teacher check = new Teacher();

		if (check.setWorkExp(bufWorkExp) || check.setDegree(bufDegree) || check.setFacultyName(bufFacultyName))
		{
			workExp = 0;
			degree = "unstated";
			facultyName = "unstated";
			humanField = new Human();
		}
		else
		{
			setWorkExp(bufWorkExp);
			setDegree(bufDegree);
			setFacultyName(bufFacultyName);
			humanField = new Human(bufHuman.getId(), bufHuman.getAge(),
					bufHuman.getHeight(), bufHuman.getWeight(), bufHuman.getGender(), bufHuman.fioField);
		}
	}

	//Methods
	public boolean setWorkExp(int buf)
	{
		if (buf < 0 || buf > 60)
		return (true);
		else
		{
			workExp = buf;
			return (false);
		}
	}

	public boolean setDegree(String bufString)
	{
		if (bufString.isEmpty()) 
			return (true);
		
		String invalidSymbStr = "!@#$%^&*()_+1234567890-=\";:?*,./'][{}<>~`";
		char[] invalidSymbols = invalidSymbStr.toCharArray();
		for (char symb : invalidSymbols) 
		{
			if(bufString.indexOf(symb) != (-1))
				return (true);
		}

		degree = degree.copyValueOf(bufString.toCharArray());
		return (false);
	}

	public boolean setFacultyName(String bufString)
	{
		if (bufString.isEmpty()) 
			return (true);
		
		String invalidSymbStr = "!@#$%^&*()_+1234567890-=\";:?*,./'][{}<>~` ";
		char[] invalidSymbols = invalidSymbStr.toCharArray();
		for (char symb : invalidSymbols) 
		{
			if(bufString.indexOf(symb) != (-1))
				return (true);
		}

		facultyName = facultyName.copyValueOf(bufString.toCharArray());
		return (false);
	}

	public int getWorkExp()
	{
		return (workExp);
	}

	public String getDegree()
	{
		return (String.copyValueOf(degree.toCharArray()));
	}

	public String getFacultyName()
	{
		return (String.copyValueOf(facultyName.toCharArray()));
	}
	
	public boolean setAll(int bufWorkExp, String bufDegree, String bufFacultyName, Human bufHuman)
	{
		Teacher check = new Teacher();

		if (check.setWorkExp(bufWorkExp) || check.setDegree(bufDegree) || check.setFacultyName(bufFacultyName))
			return (true);
		else
		{
			this.setWorkExp(bufWorkExp);
			this.setDegree(bufDegree);
			this.setFacultyName(bufFacultyName);
			this.humanField.setAll(bufHuman.getId(), bufHuman.getAge(),
			bufHuman.getHeight(), bufHuman.getWeight(),bufHuman.getGender(), bufHuman.fioField);
			return (false);
		}
	}
	
	public boolean read()
	{
		Teacher check = new Teacher();
		Scanner scanner = new Scanner(System.in);

		System.out.print("Enter scientific degree:\n");
		if (!scanner.hasNextLine())
			return (true);
		if (check.setDegree(scanner.nextLine()))
			return (true);


		System.out.print("Enter faculty name:\n");
		if (!scanner.hasNextLine())
			return (true);
		if (check.setFacultyName(scanner.nextLine()))
			return (true);


		System.out.print("Enter working experience:\n");
		if (!scanner.hasNextInt())
			return (true);
		if (check.setWorkExp(scanner.nextInt()))
			return (true);


		if (check.humanField.read())
			return(true);


		setAll(check.getWorkExp(), check.getDegree(),
				check.getFacultyName(), check.humanField);
		return(false);
	}

	public void display()
	{
		System.out.printf("working experience: %d years\n", workExp);
		System.out.printf("scientific degree: %s\n",degree);
		System.out.printf("faculty name: %s\n", facultyName);
		humanField.display();
	}
}
