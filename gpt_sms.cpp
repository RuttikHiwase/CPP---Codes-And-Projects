#include <iostream>
#include <vector>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int age;
    string grade;

public:
    // Constructor
    Student(int roll, string studentName, int studentAge, string studentGrade) {
        rollNumber = roll;
        name = studentName;
        age = studentAge;
        grade = studentGrade;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "------------------------" << endl;
    }

    // Function to get the roll number
    int getRollNumber() {
        return rollNumber;
    }
};

class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // Function to add a new student
    void addStudent(int roll, string name, int age, string grade) {
        Student newStudent(roll, name, age, grade);
        students.push_back(newStudent);
        cout << "Student added successfully!" << endl;
    }

    // Function to display all students
    void displayAllStudents() {
        if (students.empty()) {
            cout << "No students in the system." << endl;
        } else {
            cout << "Student Details:" << endl;
            for (const auto& student : students) {
                student.displayDetails();
            }
        }
    }

    // Function to search for a student by roll number
    void searchStudent(int roll) {
        bool found = false;
        for (const auto& student : students) {
            if (student.getRollNumber() == roll) {
                student.displayDetails();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with roll number " << roll << " not found." << endl;
        }
    }
};

int main() {
    StudentManagementSystem system;

    // Menu for user interaction
    int choice, roll, age;
    string name, grade;

    do {
        cout << "\nStudent Management System Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Grade: ";
                cin.ignore();
                getline(cin, grade);
                system.addStudent(roll, name, age, grade);
                break;

            case 2:
                system.displayAllStudents();
                break;

            case 3:
                cout << "Enter Roll Number to search: ";
                cin >> roll;
                system.searchStudent(roll);
                break;

            case 4:
                cout << "Exiting the program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}

