#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee {
public:
	Employee(std::string name, std::string gender, std::string date_of_birth);
	std::string getName();
	std::string getGender();
	std::string getDate_of_birth();
	std::string getJoin_date();
	unsigned short int getAge();
	void setAge(unsigned short int age);
	
private:
	float Salary, Productivity_bonus;
	unsigned int WorkingID;                                                                                
	unsigned short int Age, Height, Weight;
	bool Available_state;
	std::string Name, Gender, Date_of_birth, Join_date, Title;
};

#endif // !EMPLOYEE_H
