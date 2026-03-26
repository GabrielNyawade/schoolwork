#include <iostream>
using std::cin ,std::cout;
int* reverseList(int* list, int size);
void printList(int* list, int size);
int main()
{
    int numbers[4] = {1, 2, 3, 4};
    printList(numbers, 4);
    int* rev_numbers = reverseList(numbers, 4);
    printList(rev_numbers, 4);
    return 0;
}
int* reverseList(int* list, int size)
{
    int temp, i, j;
    for (i = 0, j = size-1; i < j; i++, j--)
    {
        temp = *(list+i);
        *(list+i) = *(list+j);
        *(list+j) = temp;
    }
    return list;
}
void printList(int* list, int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << *(list+i);
        if (i < size-1)
            cout << ", ";
    }
    cout << "}\n";
}