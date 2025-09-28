#include <iostream>
#include <string>
using namespace std;

// 부모 클래스 (기반 클래스)
class Person {
protected:
    string name;
    int age;

public:
    Person() : name(""), age(10) {}
    Person(string n, int a) : name(n), age(a) {}

    void introduce() {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
};

// 자식 클래스 (파생 클래스)
class Student : public Person {
private:
    string major;

public:
    Student(string n, int a, string m) :  major(m) {}

    void study() {
        cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
    }
};

int main() {
    Student s("홍길동", 21, "컴퓨터공학");
    s.introduce();   // 부모 클래스 함수 사용
    s.study();       // 자식 클래스 함수 사용
    return 0;
}