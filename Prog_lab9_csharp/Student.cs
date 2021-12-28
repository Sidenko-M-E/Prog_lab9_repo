﻿using System;

namespace Prog_lab6
{
	public class Student
	{
		//Attributes
		private int course;
		private string eduProg;
		private string group;
		private string facultyName;
		public Human humanField;

		//Properties
		public int Course 
		{
			get
			{
				return course;
			}
			set
			{
				if ((value >= 0) && (value <= 6))
					course = value;
			}
		}
		public string EduProg 
		{
			get
			{
				string outputString = new string(eduProg.ToCharArray());
				return (outputString);
			}
			set
			{
				if (!string.IsNullOrEmpty(value))
				{
					string invalidSymbStr = "!@#$%^&*()_+1234567890-=\";:?*,./'][{}<>~` ";
					char[] invalidSymbols = invalidSymbStr.ToCharArray();

					bool checkFlag = false;

					foreach (char symb in invalidSymbols)
					{
						if (value.IndexOf(symb) != (-1))
							checkFlag = true;
					}

					if (!checkFlag)
						eduProg = new string(value.ToCharArray());
				}
			}
		}
		public string Group 
		{
			get
			{
				string outputString = new string(group.ToCharArray());
				return (outputString);
			}
			set
			{
				if (!string.IsNullOrEmpty(value))
				{
					string invalidSymbStr = "!@#$%^&*()_+=\";:?*,./'][{}<>~` ";
					char[] invalidSymbols = invalidSymbStr.ToCharArray();

					bool checkFlag = false;

					foreach (char symb in invalidSymbols)
					{
						if (value.IndexOf(symb) != (-1))
							checkFlag = true;
					}

					if (!checkFlag)
						group = new string(value.ToCharArray());
				}
			}
		}
		public string FacultyName 
		{
			get
			{
				string outputString = new string(facultyName.ToCharArray());
				return (outputString);
			}
			set
			{
				if (!string.IsNullOrEmpty(value))
				{
					string invalidSymbStr = "!@#$%^&*()_+1234567890-=\";:?*,./'][{}<>~` ";
					char[] invalidSymbols = invalidSymbStr.ToCharArray();

					bool checkFlag = false;

					foreach (char symb in invalidSymbols)
					{
						if (value.IndexOf(symb) != (-1))
							checkFlag = true;
					}

					if (!checkFlag)
						facultyName = new string(value.ToCharArray());
				}
			}
		}
		public Human HumanField 
		{
			get
			{
				return (humanField);
			}
			set
			{
				humanField = value;
			}
		}

		//Constructors
		public Student()
		{
			course = 0;
			eduProg = "unstated";
			group = "unstated";
			facultyName = "unstated";
			humanField = new Human();
		}
		public Student(Human bufHuman)
		{
			course = 0;
			eduProg = "unstated";
			group = "unstated";
			facultyName = "unstated";
			humanField = new Human(bufHuman.GetId(), bufHuman.GetAge(), 
				bufHuman.GetHeight(), bufHuman.GetWeight(), 
				bufHuman.GetGender(), bufHuman.fioField);
		}
		public Student(int bufCourse, string bufEduProg, string bufGroup, string bufFacultyName, Human bufHuman)
		{
			Student check = new Student();

			if (check.SetCourse(bufCourse) || check.SetEduProg(bufEduProg) || check.SetGroup(bufGroup) ||
				check.SetFacultyName(bufFacultyName))
			{
				course = 0;
				eduProg = "unstated";
				group = "unstated";
				facultyName = "unstated";
				humanField = new Human();
			}
			else
			{
				SetCourse(bufCourse);
				SetEduProg(bufEduProg);
				SetGroup(bufGroup);
				SetFacultyName(bufFacultyName);
				humanField = new Human(bufHuman.GetId(), bufHuman.GetAge(),
				bufHuman.GetHeight(), bufHuman.GetWeight(), 
				bufHuman.GetGender(), bufHuman.fioField);
			}
		}

		//Methods
		public bool SetCourse(int buf)
		{
			if (buf < 0 || buf > 6)
				return (true);
			else
			{
				course = buf;
				return (false);
			}
		}
		public bool SetEduProg(string bufString)
		{
			if (string.IsNullOrEmpty(bufString))
				return (true);

			string invalidSymbStr = "!@#$%^&*()_+1234567890-=\";:?*,./'][{}<>~` ";
			char[] invalidSymbols = invalidSymbStr.ToCharArray();
			foreach (char symb in invalidSymbols)
			{
				if (bufString.IndexOf(symb) != (-1))
					return (true);
			}

			eduProg = new string (bufString.ToCharArray());
			return (false);
		}
		public bool SetGroup(string bufString)
		{
			if (string.IsNullOrEmpty(bufString))
				return (true);

			string invalidSymbStr = "!@#$%^&*()_+=\";:?*,./'][{}<>~` ";
			char[] invalidSymbols = invalidSymbStr.ToCharArray();
			foreach (char symb in invalidSymbols)
			{
				if (bufString.IndexOf(symb) != (-1))
					return (true);
			}

			group = new string (bufString.ToCharArray());
			return (false);
		}
		public bool SetFacultyName(string bufString)
		{
			if (string.IsNullOrEmpty(bufString))
				return (true);

			string invalidSymbStr = "!@#$%^&*()_+1234567890-=\";:?*,./'][{}<>~` ";
			char[] invalidSymbols = invalidSymbStr.ToCharArray();
			foreach (char symb in invalidSymbols)
			{
				if (bufString.IndexOf(symb) != (-1))
					return (true);
			}

			facultyName = new string (bufString.ToCharArray());
			return (false);
		}
		public bool SetAll(int bufCourse, string bufEduProg, string bufGroup, string bufFacultyName, Human bufHuman)
		{
			Student check = new Student();

			if (check.SetCourse(bufCourse) || check.SetEduProg(bufEduProg) || check.SetGroup(bufGroup) ||
				check.SetFacultyName(bufFacultyName))
				return (true);
			else
			{
				SetCourse(bufCourse);
				SetEduProg(bufEduProg);
				SetGroup(bufGroup);
				SetFacultyName(bufFacultyName);
				humanField.SetAll(bufHuman.GetId(), bufHuman.GetAge(),
				bufHuman.GetHeight(), bufHuman.GetWeight(), bufHuman.GetGender(), bufHuman.fioField);
				return (false);
			}
		}

		public int GetCourse()
		{ return (course); }
		public string GetEduProg()
		{
			string outputString = new string(eduProg.ToCharArray());
			return (outputString);
		}
		public string GetGroup()
		{
			string outputString = new string (group.ToCharArray());
			return (outputString);
		}
		public string GetFacultyName()
		{
			string outputString = new string (facultyName.ToCharArray());
			return (outputString);
		}

		public bool Read()
		{
			Student check = new Student();
			int bufInt;

			Console.Write("Enter education programm:\n");
			if (check.SetEduProg(Console.ReadLine()))
				return (true);


			Console.Write("Enter group:\n");
			if (check.SetGroup(Console.ReadLine()))
				return (true);


			Console.Write("Enter faculty name:\n");
			if (check.SetFacultyName(Console.ReadLine()))
				return (true);


			Console.Write("Enter course:\n");
			if (!int.TryParse(Console.ReadLine(), out bufInt))
				return (true);
			if (check.SetCourse(bufInt))
				return (true);


			if (check.humanField.Read())
				return (true);
			

			SetAll(check.GetCourse(), check.GetEduProg(), check.GetGroup(),
			check.GetFacultyName(), check.humanField);
			return (false);
		}
		public void Display()
		{
			Console.Write("course: {0}\n", course);
			Console.Write("direction of preparation: {0}\n", eduProg);
			Console.Write("group: {0}\n", group);
			Console.Write("faculty name: {0}\n", facultyName);
			humanField.Display();
		}
    }
}

