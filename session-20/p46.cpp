#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "This is a shape.\n";
    }
};

class Circle : public Shape {
public:
    void area() {
        float r;
        cout << "Enter radius of circle: ";
        cin >> r;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        float l, b;
        cout << "Enter length and breadth of rectangle: ";
        cin >> l >> b;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape {
public:
    void area() {
        float b, h;
        cout << "Enter base and height of triangle: ";
        cin >> b >> h;
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main() {
    Shape *ptr;
    Circle c;
    Rectangle r;
    Triangle t;

    cout << "\n--- Area of Circle ---\n";
    ptr = &c;
    ptr->area();

    cout << "\n--- Area of Rectangle ---\n";
    ptr = &r;
    ptr->area();

    cout << "\n--- Area of Triangle ---\n";
    ptr = &t;
    ptr->area();

    return 0;
}
