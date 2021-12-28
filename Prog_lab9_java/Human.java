package Prog_lab9_java;

import java.util.*;

public class Human
{
	//Attributes
	private int id;
	private int age;
	private int height;
	private double weight;
	private char gender;
	public Fio fioField;

	//Constructors
	public Human()
	{
		id = 0;
		age = 0;
		height = 40;
		weight = 0;
		gender = 'M';
		fioField = new Fio();
	}

	public Human(int bufId)
	{
		id = 0;
		age = 0;
		height = 40;
		weight = 0;
		gender = 'M';
		fioField = new Fio();

		setId(bufId);
	}

	public Human(int bufId, int bufAge, int bufHeight, double bufWeight, char bufGender, Fio bufFio)
	{
		Human check = new Human();

		if (check.setId(bufId) || check.setAge(bufAge) || check.setHeight(bufHeight) ||
				check.setWeight(bufWeight) || check.setGender(bufGender))
		{
			id = 0;
			age = 0;
			height = 40;
			weight = 0;
			gender = 'M';
			fioField = new Fio();
		}
		else
		{
			setId(bufId);
			setAge(bufAge);
			setHeight(bufHeight);
			setWeight(bufWeight);
			setGender(bufGender);
			fioField = new Fio(bufFio.getSurname(), bufFio.getName(), bufFio.getPatronymic());
		}
	}

	//Methods
	public int getBodyMassIndex()
	{
		return (BodyMassIndex.calculate(height, weight));
	}

	public boolean setId(int buf)
	{
		if (buf < 0 || buf > 9999)
			return (true);
		else
		{
			id = buf;
			return (false);
		}
	}

	public boolean setAge(int buf)
	{
		if (buf < 0 || buf > 200)
			return (true);
		else
		{
			age = buf;
			return (false);
		}
	}

	public boolean setHeight(int buf)
	{
		if (buf < 40 || buf > 300)
			return (true);
		else
		{
			height = buf;
			return (false);
		}
	}

	public boolean setWeight(double buf)
	{
		//round *.* format to *.1 format 
		buf = (double)(Math.round(buf * 10)) / 10;
		if (buf < 0 || buf > 650)
			return (true);
		else
		{
			weight = buf;
			return (false);
		}
	}

	public boolean setGender(char buf)
	{
		if (buf == 'M' || buf == 'F')
		{
			gender = buf;
			return(false);
		}
		else
			return (true);
	}

	public boolean setAll(int bufId, int bufAge, int bufHeight, double bufWeight, char bufGender, Fio bufFio)
	{
		Human check = new Human();

		if (check.setId(bufId) || check.setAge(bufAge) || check.setHeight(bufHeight) ||
				check.setWeight(bufWeight) || check.setGender(bufGender))
			return (true);
		else
		{
			setId(check.getId());
			setAge(check.getAge());
			setHeight(check.getHeight());
			setWeight(check.getWeight());
			setGender(check.getGender());
			fioField.setAll(bufFio.getSurname(), bufFio.getName(), bufFio.getPatronymic());
			return (false);
		}
	}

	public int getId()
	{
		return (id);
	}

	public int getAge()
	{
		return (age);
	}

	public int getHeight()
	{
		return (height);
	}

	public double getWeight()
	{
		return (weight);
	}

	public char getGender()
	{
		return (gender);
	}

	public boolean read()
	{
		Human check = new Human();
		Scanner scanner = new Scanner(System.in);

		System.out.print("Enter id:\n");
		if (!scanner.hasNextInt())
			return (true);
		if (check.setId(scanner.nextInt()))
			return (true);


		System.out.print("Enter age:\n");
		if (!scanner.hasNextInt())
			return (true);
		if (check.setAge(scanner.nextInt()))
			return (true);


		System.out.print("Enter height:\n");
		if (!scanner.hasNextInt())
			return (true);
		if (check.setHeight(scanner.nextInt()))
			return (true);


		System.out.print("Enter weight:\n");
		if (!scanner.hasNextDouble())
			return (true);
		if (check.setWeight(scanner.nextDouble()))
			return (true);


		System.out.print("Enter gender:\n");
		if(check.setGender(scanner.next(".").charAt(0)))
			return (true);


		if (check.fioField.read())
			return (true);


		this.setAll(check.getId(), check.getAge(), check.getHeight(),
				check.getWeight(), check.getGender(), check.fioField);
		return(false);
	}

	public void display()
	{
		System.out.printf("id: %d\n", id);
		System.out.printf("age: %d\n", age);
		System.out.printf("height: %d\n", height);
		System.out.printf("weight: %.1f\n", weight);
		System.out.printf("gender: %s\n", gender);
		fioField.display();
	}
}
