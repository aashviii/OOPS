#include <iostream>
using namespace std;

class Number {
    int a, b;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
    friend void swap(Number &);
};

void swap(Number &num) {
    num.a = num.a + num.b;
    num.b = num.a - num.b;
    num.a = num.a - num.b;
}

int main() {
    Number num;
    num.setData(10, 20);
    cout << "Before swapping: ";
    num.display();
    swap(num);
    cout << "After swapping: ";
    num.display();
    return 0;
}

