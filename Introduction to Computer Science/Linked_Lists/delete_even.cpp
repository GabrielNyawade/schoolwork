#include <iostream>
using std::cin, std::cout;
struct Node {
    int data;
    Node* next;
};

void insert_at_end(Node*& list, int n);
int countEven(Node* list);
void deleteEven(Node*& list);
void display_list(Node* list);

int main()
{
    Node* head = nullptr;
    int size = 0;
    cout << "Enter size of integer list: ";
    cin >> size;
    int input = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Insert element " << i+1 << ": ";
        cin >> input;
        insert_at_end(head, input);
    }
    display_list(head);
    cout << "Total even numbers are: " << countEven(head) << '\n';
    deleteEven(head);
    display_list(head);
    return 0;
}

void insert_at_end(Node*& list, int n)
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

int countEven(Node* list)
{
    int count = 0;
    Node* cur;
    for (cur = list; cur != nullptr; cur = cur->next)
    {
        if (cur->data % 2 == 0)
            count++;
    }
    return count;
}

void deleteEven(Node*& list)
{
    Node* del = list;
    Node* prev = nullptr;
    while (del != nullptr)
    {
        if (del->data % 2 == 0)
        {
            if (prev == nullptr)
            {
                list = list->next;
                delete del;
                del = list;
            } else {
                prev->next = del->next;
                delete del;
                del = prev->next;
            }
        } else {
            prev = del;
            del = del->next;
        }
    }
}

void display_list(Node* list)
{
    Node* cur = list;
    while (cur != nullptr)
    {
        cout << cur->data << " -> ";
        cur = cur->next;
    }
    cout << "null\n";
}