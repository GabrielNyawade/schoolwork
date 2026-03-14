#include <iostream>
using namespace std;

struct Student {
    string name;
    int id;
    float grades[4];
};

int threshold = 18;
float average(Student st);
void printStudent(Student st);
void showHonorRoll(Student sts[], int n);
int main()
{
    int n_students;
    cout << "Enter number of students: ";
    cin >> n_students;
    Student students[n_students];
    for (int i = 0; i < n_students; i++)
    {
        cout << "Enter student ID: ";
        cin >> students[i].id;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Enter student grades in 4 subjects: \n";
        for (int j = 0; j < 4; j++)
        {
            cout << j+1 << ": ";
            cin >> students[i].grades[j];
        }
        cout << '\n';
    }
    showHonorRoll(students, n_students);
}

float average(Student st)
{
    float av = 0;
    for (int i = 0; i < 4; i++)
    {
        av += st.grades[i];
    }
    av /= 4;
    return av;
}
void printStudent(Student st)
{
    cout << "Name: " << st.name << '\n';
    cout << "ID: " << st.id << '\n';
    cout << "Grades: ";
    for (int i = 0; i < 4; i++)
    {
        cout << st.grades[i] << " ";
    }
    cout << "\nAverage: " << average(st) << '\n';
}
void showHonorRoll(Student sts[], int n)
{
    cout << "Honor Roll: \n----------------------------\n";
    for (int i = 0; i < n; i++)
    {
        if (average(sts[i]) > threshold)
        {
            printStudent(sts[i]);
            cout << '\n';
        }
    }
    cout << "----------------------------\n";
}