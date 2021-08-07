#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Point {
    public:

    double x,y;

    Point() {};

    Point(double x, double y){
        this -> x = x;
        this -> y = y;
    }

    void display(){

        cout << "Enter Coordinate X : ";
        cin >> x ;
        cout << "Enter Coordinate Y : ";
        cin >> y ;
        cout << "Coordinate X is " << setprecision(3) << x << endl;
        cout << "Coordinate Y is " << setprecision(3) << y << endl;
        cout << "....................\n" << endl;
    }
};

int main ()
{
    Point points[5]; // Object array

    for (int i=0 ; i<5 ; i++)
    {
        points[i].display();
    }

    return 0;
}
