#include <iostream>
#include <string>
using namespace std;

// Define the struct
struct Student {
    string name;
    int age;
    float grade;
};

// Function to display student details
void displayStudent(Student students[], int n) {
    cout << "\nStudent Details:\n";
    
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }
}
void searchStudent(Student students[], int n, string name)
{
    int students_found = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].name == name)
        {
            cout << "Student found: " << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Grade: " << students[i].grade << endl;
            cout << endl;
        }
    }
    if (students_found == 0)
        cout << "No students of name: " << name << " found." << endl;
}
int main() {
    
    const int N = 3; // number of students
    Student students[N];

    // Input student details
    for (int i = 0; i < N; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);

        cout << "Enter age of student " << i + 1 << ": ";
        cin >> students[i].age;

        cout << "Enter grade of student " << i + 1 << ": ";
        cin >> students[i].grade;

        cout << endl;
    }

    // Display all students
    displayStudent(students, N);

    return 0;
}
