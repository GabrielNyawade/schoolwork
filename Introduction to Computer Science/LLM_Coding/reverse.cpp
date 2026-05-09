// file: main.cpp
#include <iostream>
using namespace std;

void reverseCString(char* str) {
    if (str == nullptr) {
        return;
    }

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int left = 0;
    int right = length - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char text[] = "a";

    cout << "Original: " << text << endl;

    reverseCString(text);

    cout << "Reversed: " << text << endl;

    return 0;
}