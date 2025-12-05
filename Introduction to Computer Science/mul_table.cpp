#include <iostream>
using std::cin, std::cout;
int main()
{
    cout << "\t\t\t\tMultiplication Table\n\n"; 
    cout << "\t|\t1\t2\t3\t4\t5\t6\t7\t8\t9\n";
    cout << "----------------------------------------------------------------------------------\n";
    for (int i = 1; i < 10; i++)
    {
        cout << i << "\t|";
        for (int j = 1; j < 10; j++)
        {
            cout << "\t" << i * j;
        }
        cout << "\n";
    }


    return 0;
}