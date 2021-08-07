#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Shape {

public:
    Shape() {};

    void draw(){ // virtual function
        cout << "Draw a Shape !" << endl;
    }
};

class Circle: public Shape {

public:
    Circle (){};
    void draw(){
        cout << "Draw a Circle Shape !" << endl;
    }
};

class Square: public Shape{
public:
    Square() {};
    void draw() {
        cout << "Draw a Square Shape!" << endl;
    }
};

class Triangle: public Shape{
public:
    Triangle(){};
    void draw(){
        cout << "Draw a Triangle Shape!" << endl;
    }
};

int main ()
{
    Shape* shapePointer;
    Shape shapeBase;
    Circle circleObj;
    Square squareObj;
    Triangle triangleObj;

    shapePointer = &shapeBase;
    shapePointer->draw();
    shapePointer = &circleObj;
    shapePointer->draw();
    shapePointer = &squareObj;
    shapePointer->draw();
    shapePointer = &triangleObj;
    shapePointer->draw();

    return 0;
}
