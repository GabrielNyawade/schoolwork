#include <iostream>
using std::cin, std::cout;
struct DynArray {
    int *p_arr;
    int elems;
    int cap;
};
void insert(DynArray& arr, int val);
void print(DynArray arr);
int main()
{
    DynArray nums;
    nums.elems = 0;
    cout << "Capacity of dynamic array: ";
    cin >> nums.cap;
    nums.p_arr = new int[nums.cap];
    cout << "Elements that you wish to enter: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Element " << i+1 << ": ";
        cin >> val;
        insert(nums, val);
    }
    print(nums);
    delete[] nums.p_arr;
    return 0;
}
void insert(DynArray& arr, int val)
{
    if (arr.elems == arr.cap)
    {
        cout << "Resizing array...\n";
        int *p_new_arr = new int[arr.cap * 2];
        for (int i = 0; i < arr.elems; i++)
            p_new_arr[i] = arr.p_arr[i];
        delete[] arr.p_arr; 
        arr.p_arr = p_new_arr;
    }
    arr.p_arr[arr.elems] = val;
    arr.elems++;
}
void print(DynArray arr)
{
    cout << "{";
    for (int i = 0; i < arr.elems; i++)
    {
        cout << *(arr.p_arr+i);
        if (i < arr.elems-1)
            cout << ", ";
    }
    cout << "}\n";
}