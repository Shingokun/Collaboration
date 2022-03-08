#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Manager.h"

class Employee {
public:
	Employee(std::string name, std::string gender, std::string date_of_birth);
	std::string getName();
	std::string getGender();
	std::string getDate_of_birth();
	std::string getJoin_date();
	std::string getTitle();
	unsigned short getAge();
	unsigned short getHeight();
	unsigned short getWeight();
	unsigned int getWorkingID();
	bool getActive_state();
	float getSalary();
	void setSalary(float salary, Manager& object);
	void setProductivity_bonus(float productivity_bonus, Manager& object);
	
private:
	float Salary, Productivity_bonus;
	unsigned int WorkingID;                                                                                
	unsigned short Age, Height, Weight;
	bool Active_state;
	std::string Name, Gender, Date_of_birth, Join_date, Title;

	friend void activateWorkingDocument(Employee &object, float salary, unsigned short height, unsigned short weight);
};

#endif // !EMPLOYEE_H
