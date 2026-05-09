// file: main.cpp
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

struct Student {
    string name;
    float grade;
};

void resize(Student*& arr, int& capacity, int size) {
    capacity = (capacity == 0) ? 1 : capacity * 2;
    Student* newArr = new Student[capacity];

    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr; // prevent memory leak
    arr = newArr;
}

void addStudent(Student*& arr, int& size, int& capacity, const string& name, float grade) {
    if (grade < 0.0f || grade > 100.0f) {
        throw invalid_argument("Grade must be between 0 and 100.");
    }
    if (size == capacity) {
        resize(arr, capacity, size);
    }
    arr[size++] = {name, grade};
}

void printAll(Student* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Name: " << arr[i].name << ", Grade: " << arr[i].grade << endl;
    }
}

float averageGrade(Student* arr, int size) {
    if (size == 0) return 0.0f;

    float sum = 0.0f;
    for (int i = 0; i < size; i++) {
        sum += arr[i].grade;
    }
    return sum / size;
}

Student findBestStudent(Student* arr, int size) {
    if (size == 0) {
        throw runtime_error("No students available.");
    }

    Student best = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i].grade > best.grade) {
            best = arr[i];
        }
    }
    return best;
}

int main() {
    Student* students = nullptr;
    int size = 0;
    int capacity = 0;

    addStudent(students, size, capacity, "Alice", 85.5f);
    addStudent(students, size, capacity, "Bob", 92.0f);
    addStudent(students, size, capacity, "Charlie", 78.0f);

    printAll(students, size);

    cout << "Average: " << averageGrade(students, size) << endl;

    Student best = findBestStudent(students, size);
    cout << "Best: " << best.name << " " << best.grade << endl;

    delete[] students; // cleanup
    return 0;
}