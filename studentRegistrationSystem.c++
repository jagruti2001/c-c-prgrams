#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int roll;
    string name;
    string course;
};

vector<Student> students; // List of students

void addStudent() {
    Student s;
    cout << "Enter Roll No: ";
    cin >> s.roll;
    cin.ignore(); // To clear input buffer
    cout << "Enter Name: ";
    getline(cin, s.name);
    cout << "Enter Course: ";
    getline(cin, s.course);
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void viewStudents() {
    cout << "\n-- Student List --\n";
    for (auto s : students) {
        cout << "Roll: " << s.roll << ", Name: " << s.name << ", Course: " << s.course << endl;
    }
    cout << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "\n--- Student Registration System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: cout << "Exiting..."; return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}
