#include <iostream>
using namespace std;

// Base class for student details
class Student {
protected:
    int rollNo;
    string name;
public:
    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }
    void displayStudentDetails() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Base class for marks
class Marks {
protected:
    int marks1, marks2, marks3;
public:
    void getMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter marks for Subject 3: ";
        cin >> marks3;
    }
    void displayMarks() {
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
        cout << "Marks for Subject 3: " << marks3 << endl;
    }
};

// Derived class that inherits from Student and Marks
class MarkSheet : public Student, public Marks {
public:
    void displayMarkSheet() {
        displayStudentDetails();
        displayMarks();
        int total = marks1 + marks2 + marks3;
        float percentage = total / 3.0;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    MarkSheet student;
    student.getStudentDetails();
    student.getMarks();
    student.displayMarkSheet();
    return 0;
}

