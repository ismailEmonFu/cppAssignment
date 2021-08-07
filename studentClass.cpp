#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Student {
private:

    int studentId;
    string studentName;
    double cgpa;

public:
    Student() {};
    Student(int id, string name, double cgpa) {
        studentId = id;
        studentName = name;
        this->cgpa = cgpa; // here both variable and method argument is same
    };

    // All setter method
    // "this" keyword is not required when your variable and method argument is same.
    // But anyway I use it to fulfill assignment requirement.
    void setId(int id){
        this->studentId = id;
    }
    void setName(string name){
        this->studentName = name;
    }
    void setResult(double result){
        this->cgpa = result;
    }
    // All getter method
    int getId(){
        return studentId;
    }

    string getName(){
        return studentName;
    }
    double getCgpa (){
        return cgpa;
    }


    void display(){
        cout << "The student Identification No. is " << getId() << endl;
        cout << "Name of the student is: " << getName() << endl;
        cout << "His/Her Result is : " << getCgpa() << endl;
        cout << "............................" << endl;
    }
};

int main ()
{
    // This student1 object provide output from parameterized constructor.
    Student student1(456,"XYZ",3.001);

    // This student2 object executed from getter and setter.
    Student student2;
    student2.setId(1234);
    student2.setName("ABC");
    student2.setResult(3.9999);
    student2.display();

    return 0;
}
