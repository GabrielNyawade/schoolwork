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

void display_list()
{
    Node* ptr = start;
    while (ptr != nullptr)
    {
        std::cout << ptr->number << "->";
        ptr = ptr->next;
    }
    std::cout << "nullptr" << std::endl;
}

Node* search_address(int target)
{
    Node* ptr;
    for (ptr = start; ptr != nullptr; ptr = ptr->next)
        if (ptr->number == target) return ptr;
    return nullptr;
}

int value_at(int pos)
{
    Node* ptr = start;
    for (int i = 0; i < pos; i++)
        ptr = ptr->next;
    return ptr->number;
}

void reverse_list()
{
    Node* ptr = start;
    Node* prev = start;
    ptr = ptr->next;
    prev->next = nullptr;
    while (ptr != nullptr)
    {
        prev = ptr;
        ptr = ptr->next;
        prev->next = start;
        start = prev;
    }
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
    std::cout << "Value at index" << 3 << " = " << value_at(3) << std::endl;
    reverse_list();
    display_list();

    return 0;
}