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

void splitOddEven(Node* list_start, Node*& H_odd, Node*& T_odd, Node*& H_even, Node* T_even)
{
    Node* cur = list_start;
    int pos = 0;
    while (cur != nullptr)
    {
        pos++;
        if (pos % 2 == 0)
        {
            add_to_end(H_even, T_even, cur->data);
        } else {
            add_to_end(H_odd, T_odd, cur->data);
        }
        cur = cur->next;
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
    display_list(head);
    Node* odd_head = nullptr;
    Node* odd_tail = nullptr;
    Node* even_head = nullptr;
    Node* even_tail = nullptr;
    splitOddEven(head, odd_head, odd_tail, even_head, even_tail);
    cout << "Odd positions :";
    display_list(odd_head);
    cout << "Even positions :";
    display_list(even_head);
    return 0;
}