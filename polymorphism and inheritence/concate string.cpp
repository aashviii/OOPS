#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];
public:
    String() {}
    String(const char* s) {
        strcpy(this->str, s);
    }

    // Overloading the + operator to concatenate strings
    String operator+(const String& S) {
        String temp;
        strcpy(temp.str, this->str);
        strcat(temp.str, S.str);
        return temp;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String str1 = "Hello, ";
    String str2 = "World!";
    String str3;

    str3 = str1 + str2; // Using the overloaded + operator

    cout << "Concatenated String: ";
    str3.display();

    return 0;
}

