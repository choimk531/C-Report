#include <iostream>
using namespace std;

class Parent {
public:
    Parent() { cout << "Parent 생성자" << endl; }
    virtual ~Parent() { cout << "Parent 소멸자" << endl; }
};

class Child : public Parent {
public:
    Child() { cout << "Child 생성자" << endl; }
    ~Child() { cout << "Child 소멸자" << endl; }
};

int main() {
    Child c;
}
