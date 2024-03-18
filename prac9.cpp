/* inheritance and runtime polymorphism */

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}

    virtual void display() const {
        std::cout << "Name: " << name << std::endl;
    }
};

class Student : public Person {
private:
    std::string course;
    int marks;
    int year;

public:
    Student(const std::string& n, const std::string& c, int m, int y) : Person(n), course(c), marks(m), year(y) {}

    void display() const override {
        Person::display();
        std::cout << "Course: " << course << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

class Employee : public Person {
private:
    std::string department;
    double salary;

public:
    Employee(const std::string& n, const std::string& d, double s) : Person(n), department(d), salary(s) {}

    void display() const override {
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
