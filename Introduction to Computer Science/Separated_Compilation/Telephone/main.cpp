#include "tel.hpp"
int main() {
    Agenda* myList = nullptr;
    bool access = true;
    int option = 0;
    char input1[32];
    char input2[12];
    while (access) {
        std::cout << "Accessing Telephone Agenda\n--------------------------------------------------\n";
        std::cout << "Enter 1 to add a new contact.\n";
        std::cout << "Enter 2 to view all contacts.\n";
        std::cout << "Enter 3 to search for a contact by name.\n";
        std::cout << "Enter 4 to delete a contact by name.\n";
        std::cout << "Enter 5 to remit access to the agenda.\n";
        std::cout << '\n' << "Option: " ; std::cin >> option;
        std::cin.ignore();
        switch (option)
        {
        case 1:
            std::cout << "Name: "; fgets(input1, 32, stdin);
            std::cout << "Phone: "; fgets(input2, 12, stdin);
            // Find a way to remove newline character from input
            input1[strcspn(input1, "\n")] = '\0';
            input1[strcspn(input2, "\n")] = '\0';
            addContact(myList, input1, input2);
            strcpy(input1, "");
            strcpy(input2, "");
            break;
        case 2:
            viewContacts(myList);
            break;
        case 3:
            std::cout << "Name: "; fgets(input1, 32, stdin);
            input1[strcspn(input1, "\n")] = '\0';
            searchContact(myList, input1);
            strcpy(input1, "");
            break;
        case 4:
            std::cout << "Name: "; fgets(input1, 32, stdin);
            input1[strcspn(input1, "\n")] = '\0';
            deleteContact(myList, input1);
            strcpy(input1, "");
            break;
        case 5:
            std::cout << "Leaving agenda...\n";
            access = false;
            break;

        default:
            std::cout << "Invalid option! Please try again.\n";
            break;
        }
    }
}