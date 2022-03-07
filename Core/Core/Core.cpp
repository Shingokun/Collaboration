#include <iostream>
#include "Employee.h"
using namespace std;

Employee e1("E101", "Male", "01012005");

int main() {
    cout << e1.getName() << endl;
    cout << e1.getAge() << endl;
    cout << e1.getJoin_date() << endl;
    system("pause");
}
