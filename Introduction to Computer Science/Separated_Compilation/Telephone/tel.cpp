#include "tel.hpp"
struct Agenda {
    char name[32];
    char phone[12];
    Agenda* next;
};
void addContact(Agenda*& list, const char* name, const char* phone) {
    // Create new contact
    Agenda* contact = new Agenda;
    strcpy(contact->name, name);
    strcpy(contact->phone, phone);
    // Append it to agenda list
    if (list == nullptr) {
        list = contact;
    } else {
        Agenda* cur = list;
        while (cur->next != nullptr) cur = cur->next;
        cur->next = contact;
    }
}
void viewContacts(Agenda* list) {
    std::cout << "Telephone Agenda\n----------------------------------------\n";
    for (Agenda* cur = list; cur != nullptr; cur = cur->next) {
        std::cout << "Name: " << cur->name << '\n';
        std::cout << "Phone: " << cur->phone << '\n';
        std::cout << '\n';
    }
    std::cout << "----------------------------------------\n";
}
void searchContact(Agenda*& list, const char* name) {
    Agenda* cur = list;
    while (cur != nullptr && strcmp(cur->name, name) != 0) cur = cur->next;
    if (cur != nullptr) {
        std::cout << "Contact found.\n";
        std::cout << "Name: " << cur->name << '\n';
        std::cout << "Phone: " << cur->phone << '\n';
        std::cout << '\n';
    } else {
        std::cout << "No contact found with name \"" << name << "\".\n";
    }
}
void deleteContact(Agenda*& list, const char* name) {
    Agenda* cur = list;
    Agenda* prev = nullptr;
    while (cur != nullptr && strcmp(cur->name, name) != 0) {
        prev = cur;
        cur = cur->next;
    }
    if (cur == nullptr) {
        std::cout << "No contact found with name \"" << name << "\".\n";
    } else {
        std::cout << "Deleting contact with name \"" << name << "\"...\n";
        if (cur == list) {
            list = list->next;
            delete cur;
            cur = list;
        } else {
            Agenda* aux = cur->next;
            prev->next = aux;
            delete cur;
            cur = aux;
        }
    }
}