#include <iostream>
#include <string>

class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;

    Address(const std::string& street, const std::string& city, const std::string& state, const std::string& zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}
};

class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    double marks;
    Address address;

public:
    Student(const std::string& name, const std::string& studentClass, int rollNumber, double marks, const Address& address)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks), address(address) {}

    std::string calculateGrade() const {
        if (marks >= 90) return "A+";
        else if (marks >= 80) return "A";
        else if (marks >= 70) return "B";
        else if (marks >= 60) return "C";
        else return "D";
    }

    void displayInformation() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        std::cout << "Address: " << address.street << ", " << address.city << ", " << address.state << " - " << address.zipCode << std::endl;
    }
};

int main() {
    Address address("123 Main St", "Ahmedabad", "Gujarat", "380001");

    Student student("John Doe", "10th Grade", 101, 85.5, address);

    student.displayInformation();

    return 0;
}
