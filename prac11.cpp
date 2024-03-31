/* file operation */

#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string className;
    int year;
    int totalMarks;

public:
    Student(int r, const string& n, const string& c, int y, int t) : rollNo(r), name(n), className(c), year(y), totalMarks(t) {}

    void saveToFile(ofstream& file) const {
        file << rollNo << " " << name << " " << className << " " << year << " " << totalMarks << endl;
    }

    static Student readFromFile(ifstream& file) {
        int rollNo;
        string name, className;
        int year, totalMarks;
        file >> rollNo >> name >> className >> year >> totalMarks;
        return Student(rollNo, name, className, year, totalMarks);
    }

    void display() const {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Year: " << year << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        Student student1(1, "John Doe", "Class X", 2023, 450);
        Student student2(2, "Alice Smith", "Class XI", 2022, 480);
        student1.saveToFile(outFile);
        student2.saveToFile(outFile);
        outFile.close();
    } else {
        cerr << "Unable to open file for writing." << endl;
    }

    ifstream inFile("students.txt");
    if (inFile.is_open()) {
        Student student1 = Student::readFromFile(inFile);
        Student student2 = Student::readFromFile(inFile);
        student1.display();
        student2.display();
        inFile.close();
    } else {
        cerr << "Unable to open file for reading." << endl;
    }

    return 0;
}
