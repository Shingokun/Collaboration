#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Manager.h"

Manager::Manager(std::string name, std::string gender, std::string date_of_birth)
	: Name(name), Gender(gender), Date_of_birth(date_of_birth) {
	time_t now = time(0);
	tm* localtm = localtime(&now);
	Manager::Join_date =
		(localtm->tm_mday >= 10 ? std::to_string(localtm->tm_mday) : ("0" + std::to_string(localtm->tm_mday))) +
		(localtm->tm_mon >= 10 ? std::to_string(localtm->tm_mday + 1) : ("0" + std::to_string(localtm->tm_mday + 1))) +
		std::to_string(1900 + localtm->tm_year);
	Manager::Title = "Manager";
	std::cout << "Profile created. (" << Manager::Name << ")" << std::endl;
}

std::string Manager::getName()
{
	return Manager::Name;
}

std::string Manager::getGender()
{
	return Manager::Gender;
}

std::string Manager::getDate_of_birth()
{
	return Manager::Date_of_birth;
}

std::string Manager::getJoin_date()
{
	return Manager::Join_date;
}

std::string Manager::getTitle()
{
	return Manager::Title;
}

unsigned short Manager::getAge()
{
	time_t now = time(0);
	tm* localtm = localtime(&now);
	unsigned short temp = Manager::Date_of_birth[Manager::Date_of_birth.length() - 1] - 48;

	for (unsigned short a = 1; a < 4; a++) {
		temp += (Manager::Date_of_birth[Manager::Date_of_birth.length() - 1 - a] - 48) * pow(10, a);
	}
	Manager::Age = 1900 + localtm->tm_year - temp;
	return Manager::Age;
}

unsigned int Manager::getWorkingID()
{
	return 0;
}
bool Manager::getActive_state()
{
	return Manager::Active_state;
}
void activateWorkingDocument(Manager& object, unsigned short height, unsigned short weight) {
	srand(time(0));
	object.Active_state = true;
	object.WorkingID = rand() % 10000000;
	std::cout << "Profile activated. (" << object.Name << ")" << std::endl;
}
