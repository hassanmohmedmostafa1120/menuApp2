#include <iostream>
#include <cstring>
#include "../include/employee.hpp"

using namespace std;
Employee::Employee(){};
 Employee::Employee(int empId, const char empName[], double empSalary)
       
    {
        id = empId;
        std::strcpy(name, empName);
        salary = empSalary;
     
    }
void Employee::addEmployee(int empId, const char empName[], double empSalary)
{
    id = empId;

    std::strcpy(name, empName);

    salary = empSalary;
}

void Employee::displayEmployee(Employee empArray[10], int empCount)
{
    cout << "Employee Details:" << endl;

    for (int i = 0; i < empCount; ++i)
    {
        if (empArray[i].id != 0)
        {
            cout << "ID: " << empArray[i].id << endl;
            cout << "Name: " << empArray[i].name << endl;
            cout << "Salary: " << empArray[i].salary << endl;
            cout << "------------------------" << endl;
        }
    }
}