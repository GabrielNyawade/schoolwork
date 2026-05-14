#include <iostream>
#include <list>
using std::cin, std::cout, std::list, std::string;

int main()
{
    list<string> tasks;
    bool edit = true;
    do {
        cout << "Your Tasks\n------------\n";
        cout << "Enter 1 to add a task.\n";
        cout << "Enter 2 to add an urgent task (at the top of the list).\n";
        cout << "Enter 3 to remove the last completed task.\n";
        cout << "Enter 4 to see your remaining tasks.\n";
        cout << "Enter 5 to close the task program.\n";
        int option = 0;
        string input;
        cout << "Your option is: ";
        cin >> option;
        cin.ignore();
        switch (option)
        {
        case 1:
            cout << "\nAdd task: ";
            getline(cin, input);
            tasks.push_back(input);
            break;
        case 2:
            cout << "\nAdd urgent task: ";
            getline(cin, input);
            tasks.push_front("URGENT: " + input);
            break;
        case 3:
            if (tasks.empty()) cout << "\nTask list is empty! Add a task to begin.\n";
            else tasks.pop_back();
            break;
        case 4:
            cout << "\nTasks: ";
            for (string task: tasks) cout << '\t' << task << '\n';
            break;
        case 5:
            cout << "\nClosing...\n";
            edit = false;
            break;
        default:
            cout << "\nInvalid option! Please try again with the correct input.\n";
            break;
        }
    } while (edit);
    return 0;
}