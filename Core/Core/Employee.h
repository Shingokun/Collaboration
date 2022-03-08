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
	float getSalary();
	unsigned int getWorkingID();
	unsigned short getAge();
	unsigned short getHeight();
	unsigned short getWeight();
	bool getActive_state();
	void setSalary(float salary, Manager& object);
	void setProductivity_bonus(float productivity_bonus, Manager& object);
	
private:
	std::string Name, Gender, Date_of_birth, Join_date, Title;
	float Salary, Productivity_bonus;
	unsigned int WorkingID;                                                                                
	unsigned short Age, Height, Weight;
	bool Active_state;

	friend void activateWorkingDocument(Employee &object, float salary, unsigned short height, unsigned short weight);
};

#endif // !EMPLOYEE_H
