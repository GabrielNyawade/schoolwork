#include <iostream>
using std::cin, std::cout;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i == 0) return false;
    }
    return true;
}

void add_to_end(Node*& list_start, Node*& list_end, int n)
{
    Node* new_node = new Node;
    new_node->data = n;
    new_node->prev = nullptr;
    new_node->next = nullptr;
    if (list_start == nullptr)
    {
        list_start = new_node;
        list_end = new_node;
    }
    else
    {
        Node* ptr = list_end;
        ptr->next = new_node;
        new_node->prev = ptr;
        list_end = new_node;
    }
}

int countPrimes(Node* list_start)
{
    int count = 0;
    Node* cur;
    for (cur = list_start; cur != nullptr; cur = cur->next)
    {
        if (isPrime(cur->data))
            count++;
    }
    return count;
}

void deletePrimes(Node*& list_start, Node*& list_end)
{
    Node* del = list_start;
    while (del != nullptr)
    {
        if (isPrime(del->data))
        {
            if (del->prev == nullptr)
            {
                list_start = list_start->next;
                delete del;
                del = list_start;
                del->prev = nullptr;
            } else if (del->next == nullptr) {
                list_end = list_end->prev;
                delete del;
                del = list_end;
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
    int size = 0;
    cout << "Enter size of integer list: ";
    cin >> size;
    int input = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Insert element " << i+1 << ": ";
        cin >> input;
        add_to_end(head, tail, input);
    }
    display_list(head);
    cout << "Total prime numbers are: " << countPrimes(head) << '\n';
    deletePrimes(head, tail);
    display_list(head);
    return 0;
}