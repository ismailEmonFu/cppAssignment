#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Employee {
private:

    int empId;
    string empName;

public:
    Employee() {};
    Employee(int empId, string empName) {
        this -> empId = empId;
        this -> empName = empName;
    };

    int getId(){
        return empId;
    }
    string getName(){
        return empName;
    }
};

class FullTimeEmployee: public Employee {
private:
    int salary;
public:
    FullTimeEmployee() {};
    FullTimeEmployee(int salary){
        this->salary = salary;
    }

    int getSalary(){
        return salary;
    }
};

class PartTimeEmployee: public FullTimeEmployee, public Employee
{

private:
    int daily_wage;
public:
    PartTimeEmployee(int daily_wage){
        this->daily_wage = daily_wage;
    };
    int getWage(){
        return daily_wage;
    }
};

int main ()
{
    FullTimeEmployee fullemp(50000);
    PartTimeEmployee partemp(200);

    cout << "Full time employee salary : " << fullemp.getSalary() << endl;
    cout << "Part time daily wage : " << partemp.getWage() << endl;


    return 0;
}
