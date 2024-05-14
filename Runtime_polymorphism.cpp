/* inheritance and runtime polymorphism */

#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {}

    virtual void display() 
const {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person 
{
private:
    string course;
    int marks;
    int year;

public:
    Student(const string& n, const string& c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    void display() 
const override {
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person 
{
private:
    string department;
    double salary; //doule store upto 15 decimal

public:
    Employee(const string& n, const string& d, double s) : Person(n), department(d), salary(s) {}

    void display() 
const override {
        Person::display();
        std::cout << "Department: " << department << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Person* person1 = new Person("John Doe");
    Person* student1 = new Student("Alice Smith", "Computer Science", 90, 2023);
    Person* employee1 = new Employee("Bob Johnson", "Engineering", 75000);

    person1->display();
    student1->display();
    employee1->display();

    delete person1;
    delete student1;
    delete employee1;

    return 0;
}
