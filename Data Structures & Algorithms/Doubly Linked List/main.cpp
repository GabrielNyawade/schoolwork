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

void insert_end(int data)
{
    Node* new_node = new Node;
    new_node->value = data;
    new_node->prev = nullptr;
    new_node->next = nullptr;
    if (start == nullptr) start = new_node;
    else
    {
        Node* ptr = start;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->prev = ptr;
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
void swap(Node* n1, Node* n2)
{
    int temp = n1->value;
    n1->value = n2->value;
    n2->value = temp;
}

void ascending(Node* start)
{
    Node* p1 = start;
    while (p1 != nullptr)
    {
        Node* p2 = p1->next;
        while (p2 != nullptr)
        {
            if (p2->value < p1->value)
                swap(p1, p2);
            p2 = p2->next;
        }
        p1 = p1->next;
    }
}

void descending(Node* start)
{
    Node* p1 = start;
    while (p1 != nullptr)
    {
        Node* p2 = p1->next;
        while (p2 != nullptr)
        {
            if (p2->value > p1->value)
                swap(p1, p2);
            p2 = p2->next;
        }
        p1 = p1->next;
    }
}

int main()
{
    insert_start(3);
    insert_start(1);
    insert_start(2);
    insert_start(8);
    insert_start(9);
    insert_start(4);
    insert_start(7);
    insert_start(5);
    insert_end(6);
    display_list();
    ascending(start);
    display_list();
    descending(start);
    display_list();
    return 0;
}
