#include <iostream>
#include <limits>
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

int maximum(Node* start)
{
    int val = std::numeric_limits<int>::min();
    Node* cur = start;
    while (cur != nullptr)
    {
        if (cur->data > val)
            val = cur->data;
        cur = cur->next;
    }
    return val;
}

int minimum(Node* start)
{
    int val = std::numeric_limits<int>::max();
    Node* cur = start;
    while (cur != nullptr)
    {
        if (cur->data < val)
            val = cur->data;
        cur = cur->next;
    }
    return val;
}

void remove_max_min(Node*& start, Node*& end)
{
    Node* del = start;
    int max = maximum(start);
    int min = minimum(start);
    while (del != nullptr)
    {
        if (del->data == max || del->data == min)
        {
            if (del->prev == nullptr)
            {
                start = start->next;
                delete del;
                del = start;
                del->prev = nullptr;
            } else if (del->next == nullptr) {
                end = end->prev;
                delete del;
                del = end;
                del->next = nullptr;
            } else {
                del->prev->next = del->next;
                if (del->next != nullptr)
                    del->next->prev = del->prev;
                Node* aux = del->next; 
                delete del;
                del = aux;
            }
        } else {
            del = del->next;
        }
    }
}

void display_list(Node*& start)
{
    std::cout << "NULL";
    for (Node* ptr = start; ptr != nullptr; ptr = ptr->next)
    {
        std::cout << "<-" << ptr->data << "->";
    }
    std::cout << "NULL\n";
}

int main()
{
    Node* list1_start = nullptr;
    Node* list1_end = nullptr;
    int n = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int input = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> input;
        insert_end(list1_start, list1_end, input);
    }
    display_list(list1_start);
    cout << "Maximum value is: " << maximum(list1_start) << '\n';
    cout << "Minimum value is: " << minimum(list1_start) << '\n';
    remove_max_min(list1_start, list1_end);
    display_list(list1_start);
    return 0;
}