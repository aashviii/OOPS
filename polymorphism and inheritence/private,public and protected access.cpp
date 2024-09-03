#include <iostream>
using namespace std;

class Base {
private:
    int pvt = 1; // Private member
protected:
    int prot = 2; // Protected member
public:
    int pub = 3; // Public member

    // Function to access private member
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
public:
    // Function to access protected member from Base
    int getProt() {
        return prot;
    }
};

class ProtectedDerived : protected Base {
public:
    // Function to access protected member from Base
    int getProt() {
        return prot;
    }

    // Function to access public member from Base
    int getPub() {
        return pub;
    }
};

class PrivateDerived : private Base {
public:
    // Function to access protected member from Base
    int getProt() {
        return prot;
    }

    // Function to access public member from Base
    int getPub() {
        return pub;
    }
};

int main() {
    PublicDerived publicObj;
    cout << "Public Derived Class:" << endl;
    cout << "Private = " << publicObj.getPVT() << endl;
    cout << "Protected = " << publicObj.getProt() << endl;
    cout << "Public = " << publicObj.pub << endl;

    ProtectedDerived protectedObj;
    cout << "\nProtected Derived Class:" << endl;
    cout << "Protected = " << protectedObj.getProt() << endl;
    cout << "Public = " << protectedObj.getPub() << endl;

    PrivateDerived privateObj;
    cout << "\nPrivate Derived Class:" << endl;
    cout << "Protected = " << privateObj.getProt() << endl;
    cout << "Public = " << privateObj.getPub() << endl;

    return 0;
}

