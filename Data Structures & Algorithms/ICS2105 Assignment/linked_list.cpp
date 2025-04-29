#include <iostream>

struct Node
{
    int number;
    Node* next;
};

Node* start = nullptr;

void insert_start(int data)
{
    Node* new_node = new Node;
    new_node->number = data;
    new_node->next = start;
    start = new_node;
}

void insert_end(int data)
{
    Node* new_node = new Node;
    new_node->number = data;
    new_node->next = nullptr;
    if (start == nullptr)
        start = new_node;
    else
    {
        Node* ptr = start;
        while (ptr->next != nullptr)
            ptr = ptr->next;
        ptr->next = new_node;
    }
}

void reverse_list()
{
    Node* curr = start;
    Node* prev = start;
    curr = curr->next;
    prev->next = nullptr;
    while (curr != nullptr)
    {
        prev = curr;
        curr = curr->next;
        prev->next = start;
        start = prev;
    }
}

void display_list()
{
    Node* ptr = start;
    while (ptr != nullptr)
    {
        std::cout << ptr->number << "->";
        ptr = ptr->next;
    }
    std::cout << "NULL" << std::endl;
}


int main()
{
    insert_start(2);
    insert_start(4);
    insert_start(5);
    insert_start(7);
    display_list();
    insert_end(10);
    display_list();
    reverse_list();
    display_list();

    return 0;
}