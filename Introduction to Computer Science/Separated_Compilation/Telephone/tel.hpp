#include <iostream>
#include <cstring>
struct Agenda;
void addContact(Agenda*& list, const char* name, const char* phone);
void viewContacts(Agenda* list);
void searchContact(Agenda*& list, const char* name);
void deleteContact(Agenda*& list, const char* name);
