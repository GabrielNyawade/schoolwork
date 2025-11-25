#include <iostream>



int main()
{
    std::string food;
    std::string name;
    std::cout << "Hello what is your name" << std::endl;
    std::cin>>name;
    std::cout<<"welcome " <<name <<".whats your delicacy: ";
    std::getline(std::cin::std::ws,food);
    std::cout<<name<< "seems like you love " <<food<< " so much"<<std::endl;

    return 0;
}
