#pragma warning(disable : 4996)
#include "Employee.h"
#include <string>
#include <ctime>

Employee::Employee(std::string name, std::string gender, std::string date_of_birth)
	: Name(name), Gender(gender), Date_of_birth(date_of_birth) {
	time_t now = time(0);
	tm* localtm = localtime(&now);
	Employee::Join_date = 
		(localtm->tm_mday >= 10 ? std::to_string(localtm->tm_mday) : ("0" + std::to_string(localtm->tm_mday))) +
		(localtm->tm_mon >= 10 ? std::to_string(localtm->tm_mday + 1) : ("0" + std::to_string(localtm->tm_mday + 1))) +
		std::to_string(1900 + localtm->tm_year);
}
std::string Employee::getName() {
	return Employee::Name;
}
std::string Employee::getGender() {
	return Employee::Gender;
}
std::string Employee::getDate_of_birth() {
	return Employee::Date_of_birth;
}
std::string Employee::getJoin_date() {
	return Employee::Join_date;
}
unsigned short int Employee::getAge() {
	time_t now = time(0);
	tm* localtm = localtime(&now);
	unsigned short int temp = Employee::Date_of_birth[Employee::Date_of_birth.length() - 1] - 48;

	for (unsigned short int a = 1; a < 4; a++) {
		temp += (Employee::Date_of_birth[Employee::Date_of_birth.length() - 1 - a] - 48) * pow(10, a);
	}
	Employee::Age = 1900 + localtm->tm_year - temp;
	return Employee::Age;
}
void Employee::setAge(unsigned short int age) {
	Employee::Age = age;
}