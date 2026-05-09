#include <iostream>
using std::cin, std::cout;

struct Node
{
    int data;
    Node* next;
};

void add(Node*& list, int n)
{
    Node* aux = new Node;
    aux->data = n;
    aux->next = nullptr;
    if (list == nullptr)
    {
        list = aux;
    } else {
        Node* cur = list;
        while (cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = aux;
    }
}

void delete_from(Node*& list, int elem)
{
    Node* del = list;
    Node* prev = nullptr;
    while (del != nullptr && del->data != elem)
    {
        prev = del;
        del = del->next;
    }
    if (del == nullptr)
    {
        cout << "Element not found!\n";
    } else {
        if (prev == nullptr)
        {
            list = list->next;
            delete del;
            del = nullptr;
        } else {
            prev->next = del->next;
            delete del;
            del = nullptr;
        }
    }
}


int main()
{
    Node* h1 = nullptr;
    add(h1, 1);
    add(h1, 2);
    add(h1, 3);
    
    // Print
    Node* p = h1;
    while (p != nullptr)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << "null\n";
    
    delete_from(h1, 1);

    // Print after deletion
    // Print
    p = h1;
    while (p != nullptr)
    {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << "null\n";
    return 0;
}