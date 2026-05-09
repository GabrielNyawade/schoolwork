#include <iostream>
using std::cin, std::cout;
struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insert_end(Node*& start, Node*& end, int n)
{
    Node* new_node = new Node;
    new_node->data = n;
    new_node->prev = nullptr;
    new_node->next = nullptr;
    if (start == nullptr)
    {
        start = new_node;
        end = new_node;
    }
    else
    {
        Node* ptr = end;
        ptr->next = new_node;
        new_node->prev = ptr;
        end = new_node;
    }
}

