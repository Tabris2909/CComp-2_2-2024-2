#include <iostream>
#include <vector>
#include <string>
#include "Employee.h" 
#include "PieceWorker.h" 
#include "HourlyWorker.h" 
using namespace std;

int main() {
    vector<Employee*> employees;

    employees.push_back(new PieceWorker("John", "Doe", "111-11-1111", 2.5, 100));
    employees.push_back(new HourlyWorker("Jane", "Smith", "222-22-2222", 15.0, 45));

    for (auto* employee : employees) {
        cout << employee->toString() << endl;
        cout << "Earnings: $" << employee->earnings() << endl << endl;

        delete employee;
    }

    return 0;
}
