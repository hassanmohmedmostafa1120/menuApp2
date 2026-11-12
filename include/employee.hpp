#pragma once

class Employee
{
public:
    int id;
    char name[50];
    double salary;

    void addEmployee(int empId, const char empName[], double empSalary);

    static void displayEmployee(Employee empArray[10], int empCount);
};