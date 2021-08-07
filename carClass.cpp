#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Car {

public:
    Car() {};

//    virtual void start(){ // pure virtual function
//        cout << "Start Car !" << endl;
//    }
    void start(){ // virtual function
        cout << "Start Car !" << endl;
    }
};

class Toyota: public Car {

public:
    Toyota (){};
    void start(){
        cout << "Start Toyota Car !" << endl;
    }
};

class Honda: public Car {
public:
    Honda() {};
    void start() {
        cout << "Start Honda !" << endl;
    }
};

class Mazda: public Car {
public:
    Mazda(){};
    void start(){
        cout << "Start Mazda !" << endl;
    }
};

int main ()
{
    Car* carPointer;
    Car carBase;
    Toyota toyotaObj;
    Honda hondaObj;
    Mazda mazdaObj;

    carPointer = &carBase;
    carPointer->start();
    carPointer = &toyotaObj;
    carPointer->start();
    carPointer = &hondaObj;
    carPointer->start();
    carPointer = &mazdaObj;
    carPointer->start();

    return 0;
}

