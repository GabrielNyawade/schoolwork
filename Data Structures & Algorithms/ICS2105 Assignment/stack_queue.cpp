#include <iostream>
#define MAX 100
class Stack
{
private:
    int line[MAX];
    int TOP;
public:
    Stack()
    {
        TOP = -1;
    }

    int top()
    {
        if (TOP == -1) return -1;
        else return line[TOP];
    }
    void push(int val)
    {
        if (TOP == MAX - 1) return;
        
        if (TOP == -1) TOP = 0;
        else TOP++;
        line[TOP] = val;
    }
    void pop()
    {
        if (TOP == -1) return;
        line[TOP] = 0;
        TOP--;
    }
    bool empty()
    {
        if (TOP == -1) return true;
        else return false;
    }
};

class Queue
{
private:
    Stack s1, s2;
public:
    void enqueue(int val)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue()
    {
        if (s1.empty()) return -1;
        int val = s1.top();
        s1.pop();
        return val;
    }

};

int main()
{

    return 0;
}