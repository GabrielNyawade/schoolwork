#include <iostream>
using std::cin, std::cout, std::string;

class Employee
{
private:
    int id_num;
    string first_name;
    string second_name;
    string surname;
    char gender;
    string dob;
    float salary;
public:
    Employee()
    {
        cout << "\tADD EMPLOYEE DETAILS\n\n";
        cout << "ENTER ID NUMBER\t\t\t\t: ";
        cin >> id_num;
        cout << "ENTER FIRST NAME\t\t\t: ";
        cin >> first_name;
        cout << "ENTER SECOND NAME\t\t\t: ";
        cin >> second_name;
        cout << "ENTER SURNAME\t\t\t\t: ";
        cin >> surname;
        cout << "ENTER GENDER <M or F>\t\t\t: ";
        cin >> gender;
        cout << "ENTER DATE OF BIRTH <DD-MM-YYYY>\t: ";
        cin >> dob;
        cout << "ENTER BASIC SALARY IN KSH\t\t: ";
        cin >> salary;
    }
    void show_employee()
    {
        cout << "\n\tEMPLOYEE DETAILS\n";
        cout << "==================================\n";
        cout << "ID NUMBER\t\t: " << id_num << "\n";
        cout << "FIRST NAME\t\t: " << first_name << "\n";
        cout << "SECOND NAME\t\t: " << second_name << "\n";
        cout << "SURNAME\t\t\t: " << surname << "\n";
        cout << "GENDER\t\t\t: " << gender << "\n";
        cout << "DATE OF BIRTH\t\t: " << dob << "\n";
        cout << "BASIC SALARY Ksh.\t: " << salary << "\n";
    }
};


int main()
{
    Employee emp_obj;
    emp_obj.show_employee();
    return 0;
}