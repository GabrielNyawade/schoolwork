#include <iostream>
using std::cin, std::cout;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

void add_to_end(Node*& list_start, Node*& list_end, int elem)
{
    Node* new_node = new Node;
    new_node->data = elem;
    new_node->prev = nullptr;
    new_node->next = nullptr;
    if (list_start == nullptr)
    {
        list_start = new_node;
        list_end = new_node;
    } else {
        new_node->prev = list_end;
        list_end->next = new_node;
        list_end = list_end->next;
    }
}

void swap_adjacent(Node* list_start)
{
    Node* cur = list_start;
    while (cur != nullptr && cur->next != nullptr)
    {
        int temp = cur->data;
        cur->data = cur->next->data;
        cur->next->data = temp;
        
        cur = cur->next->next;
    }
}

void display_list(Node* list_start)
{
    Node* cur = list_start;
    cout << "null";
    while (cur != nullptr)
    {
        cout << " <- " << cur->data << " -> ";
        cur = cur->next;
    }
    cout << "null\n";
}

int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    int entries = 0;
    cout << "Number of entries: ";
    cin >> entries;
    for (int i = 0; i < entries; i++)
    {
        int input = 0;
        cout << "Enter element " << i+1 << ": ";
        cin >> input;
        add_to_end(head, tail, input);
    }
    cout << "Original list: ";
    display_list(head);
    cout << "After swapping pairs: ";
    swap_adjacent(head);
    display_list(head);
    return 0;
}