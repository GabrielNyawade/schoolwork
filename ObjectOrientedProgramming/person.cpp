#include <iostream>
#include <string>

// #define MAX_LEN 32

class Person
{
private:
    std::string m_name;
    int m_age;
    std::string m_gender;
    std::string m_reg_no;
public:
    // Person(std::string name, int age, std::string gender, std::string reg_no)
    // {
    //     strcpy(m_name, name);
    //     m_age = age;
    // }
    void getDetails(void);
    void displayDetails(void);
};

void Person::getDetails()
{
    std::cout << "Enter the person's name:" << std::endl;
    //cin>>name;
    std::getline(std::cin >> std::ws, m_name);

    std::cout << "Enter the person's age:" << std::endl;
    std::cin >> m_age;

    std::cout << "Enter the person's gender:" << std::endl;
    std::getline(std::cin >> std::ws, m_gender);

    std::cout << "Enter the person's registration number:" << std::endl;
    std::getline(std::cin >> std::ws, m_reg_no);
}

void Person::displayDetails()
{
    std::cout << "=================================================\n";
    std::cout << "NAME: " << m_name << std::endl;
    std::cout << "AGE: " << m_age << std::endl;
    std::cout << "GENDER: " << m_gender << std::endl;
    std::cout << "REG_NO: " << m_reg_no << std::endl;
    std::cout << "=================================================\n";
}

int main()
{
    Person millicent;
    millicent.getDetails();
    millicent.displayDetails();
    
    return 0;

}

