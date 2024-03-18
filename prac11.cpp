/* file operation */

#include <iostream>
#include <fstream>
#include <string>

class Student {
private:
    int rollNo;
    std::string name;
    std::string className;
    int year;
    int totalMarks;

public:
    Student(int r, const std::string& n, const std::string& c, int y, int t) : rollNo(r), name(n), className(c), year(y), totalMarks(t) {}

    void saveToFile(std::ofstream& file) const {
        file << rollNo << " " << name << " " << className << " " << year << " " << totalMarks << std::endl;
    }

    static Student readFromFile(std::ifstream& file) {
        int rollNo;
        std::string name, className;
        int year, totalMarks;
        file >> rollNo >> name >> className >> year >> totalMarks;
        return Student(rollNo, name, className, year, totalMarks);
    }

    void display() const {
        std::cout << "Roll No.: " << rollNo << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    std::ofstream outFile("students.txt");
    if (outFile.is_open()) {
        Student student1(1, "John Doe", "Class X", 2023, 450);
        Student student2(2, "Alice Smith", "Class XI", 2022, 480);
        student1.saveToFile(outFile);
        student2.saveToFile(outFile);
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    std::ifstream inFile("students.txt");
    if (inFile.is_open()) {
        Student student1 = Student::readFromFile(inFile);
        Student student2 = Student::readFromFile(inFile);
        student1.display();
        student2.display();
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading." << std::endl;
    }

    return 0;
}
