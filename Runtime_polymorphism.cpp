/* inheritance and runtime polymorphism */

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string name) {
        this->name = name;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
    string course;
    int marks;
    int year;
public:
    Student(string name, string course, int marks, int year) : Person(name) {
        this->course = course;
        this->marks = marks;
        this->year = year;
    }

    void display() {
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
    string department;
    int salary;
public:
    Employee(string name, string department, int salary) : Person(name) {
        this->department = department;
        this->salary = salary;
    }

    void display() {
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person *p;
    Student s("John", "B.Tech", 90, 2023);
    Employee e("Jane", "HR", 50000);

    p = &s;
    p->display();
    cout<<endl;
    p = &e;
    p->display();


    return 0;
}
