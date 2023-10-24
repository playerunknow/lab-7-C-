#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//class Cat {
//private:
//	int age;
//	string breed;
//	float weight;
//	string color;
//
//public:
//	Cat(int catAge, const string& catBreed, float catWeight, const string& catColor)
//		: age(catAge), breed(catBreed), weight(catWeight), color(catColor)
//	{
//		cout << "Called constructor with parameters" << endl;
//	}
//
//	Cat() : age(0), breed(""), weight(5.0), color("Unknown")
//	{
//		cout << "Called default constructor" << endl;
//	}
//
//	Cat(const Cat& other)
//		: age(other.age), breed(other.breed), weight(other.weight), color(other.color)
//	{
//		cout << "Called copy constructor" << endl;
//	}
//
//	~Cat()
//	{
//		cout << "Called destructor" << endl;
//	}
//
//	int getAge() const
//	{
//		return age;
//	}
//
//	string getBreed() const
//	{
//		return breed;
//	}
//
//	float getWeight() const
//	{
//		return weight;
//	}
//
//	string getColor() const
//	{
//		return color;
//	}
//
//	void setAge(int catAge)
//	{
//		age = catAge;
//	}
//
//	void setBreed(const string& catBreed)
//	{
//		breed = catBreed;
//	}
//
//	void setWeight(float catWeight)
//	{
//		weight = catWeight;
//	}
//
//	void setColor(const string& catColor)
//	{
//		color = catColor;
//	}
//
//	void inputData()
//	{
//		cout << "Enter age: ";
//		cin >> age;
//
//		cout << "Enter breed: ";
//		cin.ignore();
//		getline(cin, breed);
//
//		cout << "Enter weight: ";
//		cin >> weight;
//
//		cout << "Enter color: ";
//		cin.ignore();
//		getline(cin, color);
//	}
//
//	void displayInfo()
//	{
//		cout << "Age: " << age << endl;
//		cout << "Breed: " << breed << endl;
//		cout << "Weight: " << weight << " kg" << endl;
//		cout << "Color: " << color << endl;
//	}
//};

//class Pencil
//{
//private:
//	string color;
//	float length;
//	float diameter;
//	bool hasEraser;
//
//public:
//	Pencil(const string& pencilColor, float pencilLength, float pencilDiameter, bool pencilHasEraser)
//		: color(pencilColor), length(pencilLength), diameter(pencilDiameter), hasEraser(pencilHasEraser)
//	{
//		cout << "Called constructor with parameters" << endl;
//	}
//
//	Pencil() : color("Black"), length(6.0), diameter(0.7), hasEraser(true)
//	{
//		cout << "Called default constructor" << endl;
//	}
//
//	Pencil(const Pencil& other)
//		: color(other.color), length(other.length), diameter(other.diameter), hasEraser(other.hasEraser)
//	{
//		cout << "Called copy constructor" << endl;
//	}
//
//	~Pencil()
//	{
//		cout << "Called destructor" << endl;
//	}
//
//	string getColor() const
//	{
//		return color;
//	}
//
//	float getLength() const
//	{
//		return length;
//	}
//
//	float getDiameter() const
//	{
//		return diameter;
//	}
//
//	bool hasEraser() const
//	{
//		return hasEraser;
//	}
//
//	void setColor(const string& pencilColor)
//	{
//		color = pencilColor;
//	}
//
//	void setLength(float pencilLength)
//	{
//		length = pencilLength;
//	}
//
//	void setDiameter(float pencilDiameter)
//	{
//		diameter = pencilDiameter;
//	}
//
//	void setEraser(bool pencilHasEraser)
//	{
//		hasEraser = pencilHasEraser;
//	}
//
//	void inputData()
//	{
//		cout << "Enter color: ";
//		cin.ignore();
//		getline(cin, color);
//
//		cout << "Enter length: ";
//		cin >> length;
//
//		cout << "Enter diameter: ";
//		cin >> diameter;
//
//		cout << "Does it have an eraser? (1 for yes, 0 for no): ";
//		cin >> hasEraser;
//	}
//
//	void displayInfo()
//	{
//		cout << "Color: " << color << endl;
//		cout << "Length: " << length << " inches" << endl;
//		cout << "Diameter: " << diameter << " mm" << endl;
//		cout << "Has Eraser: " << (hasEraser ? "Yes" : "No") << endl;
//	}
//};

//class Worker
//{
//private:
//	int age;
//	string gender;
//	double salary;
//	float weight;
//	float height;
//
//public:
//	Worker(int workerAge, const string& workerGender, double workerSalary, float workerWeight, float workerHeight)
//		: age(workerAge), gender(workerGender), salary(workerSalary), weight(workerWeight), height(workerHeight)
//	{
//		cout << "Called constructor with parameters\n";
//	}
//
//	Worker() : age(0), gender(""), salary(0.0), weight(70.0), height(170.0)
//	{
//		cout << "Called default constructor\n";
//	}
//
//	Worker(const Worker& other)
//		: age(other.age), gender(other.gender), salary(other.salary), weight(other.weight), height(other.height)
//	{
//		cout << "Called copy constructor\n";
//	}
//
//	~Worker()
//	{
//		cout << "Called destructor\n";
//	}
//
//	int getAge() const
//	{
//		return age;
//	}
//
//	string getGender() const
//	{
//		return gender;
//	}
//
//	double getSalary() const
//	{
//		return salary;
//	}
//
//	float getWeight() const
//	{
//		return weight;
//	}
//
//	float getHeight() const
//	{
//		return height;
//	}
//
//	void setAge(int workerAge)
//	{
//		age = workerAge;
//	}
//
//	void setGender(const string& workerGender)
//	{
//		gender = workerGender;
//	}
//
//	void setSalary(double workerSalary)
//	{
//		salary = workerSalary;
//	}
//
//	void setWeight(float workerWeight)
//	{
//		weight = workerWeight;
//	}
//
//	void setHeight(float workerHeight)
//	{
//		height = workerHeight;
//	}
//
//	void inputData()
//	{
//		cout << "Enter age: ";
//		cin >> age;
//
//		cout << "Enter gender: ";
//		cin.ignore();
//		getline(cin, gender);
//
//		cout << "Enter salary: ";
//		cin >> salary;
//	}
//
//	void displayInfo()
//	{
//		cout << "Age: " << age << endl;
//		cout << "Gender: " << gender << endl;
//		cout << "Salary: " << salary << endl;
//		cout << "Weight: " << weight << endl;
//		cout << "Height: " << height << endl;
//	}
//};

class Student
{
private:
	int age;
	string gender;
	double scholarship;
	float weight;
	float height;

public:
	Student(int studentAge, const string& studentGender, double studentScholarship, float weight, float height)
		: age(studentAge), gender(studentGender), scholarship(studentScholarship), weight(weight), height(height)
	{
		printf("Called constructor with parameters\n");
	}

	Student() : age(0), gender(""), scholarship(0.0), weight(78.56), height(178.45)
	{
		cout << "called default constructor\n";
	}

	Student(const Student& other)
		: age(other.age), gender(other.gender), scholarship(other.scholarship), weight(weight), height(height)
	{
		cout << "Called copy constructor\n";
	}

	~Student()
	{
		cout << "Called destructor\n";
	}

	int getAge() const
	{
		return age;
	}

	string getGender() const
	{
		return gender;
	}

	float getScholarship() const
	{
		return scholarship;
	}

	float getWeight()
	{
		return weight;
	}

	float getHeight()
	{
		return height;
	}

	void setAge(int studentAge)
	{
		age = studentAge;
	}

	void setGender(const string& studentGender)
	{
		gender = studentGender;
	}

	void setScholarship(double studentScholarship)
	{
		scholarship = studentScholarship;
	}

	void setWeight(float weight)
	{
		this->weight = weight;
	}

	void setHeight(float height)
	{
		this->height = height;
	}

	void inputData()
	{
		cout << "Enter age: ";
		cin >> age;

		cout << "Enter gender: ";
		cin.ignore();
		getline(cin, gender);

		cout << "Enter scolarship: ";
		cin >> scholarship;
	}

	void displayInfo()
	{
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		cout << "scolarship: " << scholarship << endl;
		cout << "weight" << weight << endl;
		cout << "height" << height << endl;
	}
};

int Task_4(int lowerLimit, int upperLimit) 
{
	int userNumber;
	cout << "Enter a number from " << lowerLimit << " to " << upperLimit << ": ";
	cin >> userNumber;

	while (userNumber < lowerLimit || userNumber > upperLimit) 
	{
		cout << "Invalid number! Please enter a number from " << lowerLimit << " to " << upperLimit << ": ";
		cin >> userNumber;
	}

	return userNumber;
}

void Task_5() 
{
	int n;
	cout << "Enter a number of numbers: ";
	cin >> n;

	if (n <= 0) {
		cout << "The number of numbers must be greater than zero." << endl;
		return;
	}

	int sum = 0;
	int product = 1;
	int number;

	for (int i = 0; i < n; i++) {
		cout << "Enter digit " << i + 1 << ": ";
		cin >> number;
		sum += number;
		product *= number;
	}

	cout << "Sum of entered numbers: " << sum << endl;
	cout << "The product of the entered numbers: " << product << endl;
}

void Task_5_2() 
{
	int sum = 0;
	int product = 1;
	int number;
	char answer;

	while (true) 
	{
		cout << "Enter number: ";
		cin >> number;

		sum += number;
		product *= number;

		cout << "Do you want enter one more number? (y/n): ";
		cin >> answer;

		if (answer != 'y' && answer != 'Y') 
		{
			break;
		}
	}

	cout << "Sum of entered numbers: " << sum << endl;
	cout << "The product of the entered numbers: " << product << endl;
}

void Task_8()
{
	int counter = 10; 

	while (counter > 0) {
		cout << "counter: " << counter << endl;
		counter--; 
	}
}

void Task_9()
{

}

void Task_10_Case_1()
{
	int day = 3;

	cout << "Enter a number (1-7) to represent the day of the week: ";
	cin >> day;

	switch (day - 1) 
	{
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Invalid day";
	}
}

void Task_10_Case_2()
{
	char day = 'W';

	switch (day) {
	case 'M':
		cout << "Monday";
		break;
	case 'T':
		cout << "Tuesday";
		break;
	case 'W':
		cout << "Wednesday";
		break;
	case 'Th':
		cout << "Thursday";
		break;
	case 'Fr':
		cout << "Friday";
		break;
	case 'S':
		cout << "Saturday";
		break;
	case 'Su':
		cout << "Sunday";
		break;
	default:
		cout << "Invalid day";
	}
}

void Task_10_Case_3()
{
	enum class Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

	int dayInput;
	cout << "Enter a number (1-7) to represent the day of the week: ";
	cin >> dayInput;

	if (dayInput >= 1 && dayInput <= 7) 
	{
		Day day = static_cast<Day>(dayInput - 1);

		switch (day) {
		case Day::MONDAY:
			cout << "Monday";
			break;
		case Day::TUESDAY:
			cout << "Tuesday";
			break;
		case Day::WEDNESDAY:
			cout << "Wednesday";
			break;
		case Day::THURSDAY:
			cout << "Thursday";
			break;
		case Day::FRIDAY:
			cout << "Friday";
			break;
		case Day::SATURDAY:
			cout << "Saturday";
			break;
		case Day::SUNDAY:
			cout << "Sunday";
			break;
		}
	}
	else 
	{
		cout << "Invalid input. Please enter a number between 1 and 7.";
	}
}

string Task_11() 
{
	float magnitude;
	cout << "Enter the earthquake magnitude on the Richter scale: ";
	cin >> magnitude;

	if (magnitude < 5) 
	{
		return "Light, no damage";
	}
	else if (magnitude >= 5 && magnitude < 5.5) 
	{
		return "Moderate, slight damage";
	}
	else if (magnitude >= 5.5 && magnitude < 6.5) 
	{
		return "Strong, damage to walls";
	}
	else if (magnitude >= 6.5 && magnitude < 7.5) 
	{
		return "Severe, many buildings damaged";
	}
	else 
	{
		return "Catastrophic, most buildings destroyed";
	}
}


int Task_12(int power)
{
	if (power < 40)
	{
		return 2500;
	}
	else if (power <= 60)
	{
		return 1000;
	}
	else if (power <= 150)
	{
		return 750;
	}
	else if (power <= 200)
	{
		return 500;
	}
	else
	{
		return -1;
	}
}


int main()
{

	// Task_1
	{
		cout << "Task_1\n";

		for (int x = 0; x < 100; x++)
		{
			cout << x << " ";
		}
		cout << "\n";
	}
	
	
	// Task_3

	{
		cout << "Task_3_1\n";

		for (int i = 100; i <= 200; i += 2)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	
	{
		cout << "Task_3_2\n";
		int i = 100;
		while (i <= 200)
		{
			cout << i << " ";
			i += 2;
		}
		cout << "\n";
	}
	
	{
		cout << "Task_3_3\n";
		int i = 100;
		do
		{
			cout << i << " ";
			i += 2;
		} while (i <= 200);
		cout << "\n";
	}
	

	//Task4
	cout << "Task_4\n";
	{
		int lowerLimit = 1;
		int upperLimit = 100;

		int userNumber = Task_4(lowerLimit, upperLimit);

		cout << "you entered correct number " << userNumber << endl;
		cout << "\n";

	}
	
	//Task_5
	//a)	кількість чисел попередньо вводиться із клавіатури;
	cout << "Task_5_1\n";
	Task_5();
	cout << "\n";
	//b)	обчислення припиняються на запит програми.
	cout << "Task_5_2\n";
	Task_5_2();
	cout << "\n";

	//Task6

	{
		cout << "Task_6\n";
		int counter = 0;
		while (counter < 10)
		{
			counter++;
		}
		cout << "\n";

	}
		
	// Task_7

	cout << "Task_7\n";
	int counter; 
	for (counter = 0; counter < 10; counter++) { cout << counter << " "; }
	cout << "\n";

	//Task_8
	cout << "Task_8\n";
	Task_8();
	cout << "\n";

	//Task_9
	cout << "Task_9\n";
	cout << "\n";


	//Task_10
	cout << "Task_10_1\n";
	Task_10_Case_1();
	cout << "\n";

	cout << "Task_10_2\n";
	Task_10_Case_2();
	cout << "\n";

	cout << "Task_10_3\n";
	Task_10_Case_3();
	cout << "\n";

	//Task_11
	cout << "Task_11\n";
	cout << Task_11();
	cout << "\n";
	//Task_12

	cout << "Task_12\n";
	int power;
	cout << "Enter the power of the bulb, W: ";
	cin >> power;

	int lifespan = Task_12(power);

	if (lifespan != -1) 
	{
		cout << "Lifespan of the bulb: " << lifespan << " hours" << endl;
	}
	else 
	{
		cout << "Invalid power input" << endl;
	}
	cout << "\n";

	//Task 13
	cout << "Task_13\n";

	int variable = 2;

	switch (variable) 
	{
	case 2:
		cout << "White\n";
		break;
	default:
		cout << "Other\n";
		break;
	}
	cout << "\n";
}