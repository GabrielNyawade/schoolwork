#include <iostream>

struct Node
{
    Node* prev;
    int value;
    Node* next;
};

Node* start = nullptr;
// Node* end = nullptr;

void insert_start(int data)
{
    Node* new_node = new Node;
    new_node->value = data;
    new_node->prev = nullptr;
    new_node->next = nullptr;
    if (start == nullptr)
    {
       start = new_node;
    }
    else
    {
        Node* ptr = start;
        new_node->next = start;
        ptr->prev = new_node;
        start = new_node;
    }
}

void display_list()
{
    std::cout << "NULL";
    for (Node* ptr = start; ptr != nullptr; ptr = ptr->next)
    {
        std::cout << "<-" << ptr->value << "->";
    }
    std::cout << "NULL\n";
}

int main()
{
    insert_start(2);
    insert_start(4);
    insert_start(6);
    insert_start(8);
    display_list();
    return 0;
}
