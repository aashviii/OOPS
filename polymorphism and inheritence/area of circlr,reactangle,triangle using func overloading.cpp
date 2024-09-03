#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

// Function to calculate the area of a circle
float area(float radius) {
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
float area(float length, float breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle using Heron's formula
float area(float side1, float side2, float side3) {
    float s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    float radius, length, breadth, base, height, side;

    // Calculate area of circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << area(radius) << endl;

    // Calculate area of rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << area(length, breadth) << endl;

    // Calculate area of triangle
    cout << "Enter 3 sides of the triangle: ";
    cin >> base >> height>>side;
    cout << "Area of Triangle: " << area(side,base,height) << endl;

    return 0;
}
