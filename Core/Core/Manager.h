#ifndef MANAGER_H
#define MANAGER_H
#include <string>

class Manager {
public:
	Manager(std::string name, std::string gender, std::string date_of_birth);
	std::string getName();
	std::string getGender();
	std::string getDate_of_birth();
	std::string getJoin_date();
	std::string getTitle();
	unsigned short getAge();
	unsigned int getWorkingID();
	bool getActive_state();
private:
	unsigned int WorkingID;
	unsigned short Age;
	std::string Name, Gender, Date_of_birth, Join_date, Title;
	bool Active_state;

	friend void activateWorkingDocument(Manager& object, unsigned short height, unsigned short weight);
};

#endif // !MANAGER_H

