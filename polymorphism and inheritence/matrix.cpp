
#include <iostream>
using namespace std;

class Matrix {
    int size;
    int* arr;

public:
    Matrix(int s) : size(s) {
        arr = new int[size];
    }

    void accept() {
        cout << "Enter elements of the matrix: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Matrix operator+(const Matrix& m) {
        Matrix temp(size);
        for (int i = 0; i < size; ++i) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    ~Matrix() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix m1(size), m2(size);

    cout << "Matrix 1:" << endl;
    m1.accept();

    cout << "Matrix 2:" << endl;
    m2.accept();

    Matrix m3 = m1 + m2;

    cout << "Resultant Matrix after addition:" << endl;
    m3.display();

    return 0;
}


