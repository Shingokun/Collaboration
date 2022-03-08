#include <iostream>
#include "Employee.h"
using namespace std;

Employee e1("E101", "Male", "01012005");

int main() {
    activateWorkingDocument(e1, 2000, 176, 78);

    cout << "Name: " << e1.getName() << endl;
    cout << "Gender: " << e1.getGender() << endl;
    cout << "Date of birth: " << e1.getDate_of_birth() << endl;
    cout << "Join date: " << e1.getJoin_date() << endl;
    cout << "Title: " << e1.getTitle() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Height: " << e1.getHeight() << "cm" << endl;
    cout << "Weight: " << e1.getWeight() << "kg" << endl;
    cout << "Working ID: " << e1.getWorkingID() << endl;
    cout << "Active state: " << e1.getActive_state() << endl;
    cout << "Salary: " << e1.getSalary() << "$" << endl;
    system("pause");
}
