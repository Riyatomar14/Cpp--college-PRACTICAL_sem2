/* file operation */

#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int rollNo;
    string name;
    string className;
    int year;
    int totalMarks;
public:
    void input() {
        cout << "Enter roll no: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter class: ";
        cin >> className;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter total marks: ";
        cin >> totalMarks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Year: " << year << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Student s[5];
    ofstream file;
    file.open("students.txt", ios::out);
    for (int i = 0; i < 5; i++) {
        s[i].input();
        file.write((char *)&s[i], sizeof(s[i]));
    }
    file.close();

    ifstream file2;
    file2.open("students.txt", ios::in); 
    for (int i = 0; i < 5; i++) {
        file2.read((char *)&s[i], sizeof(s[i])); // read(record, size of record)
        s[i].display();
        cout<<endl;
    }
    file2.close();
    return 0;
}
