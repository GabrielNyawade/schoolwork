#include <iostream>
#define MAX 10
class Queue
{
private:
    int line[MAX];
    int FRONT;
    int REAR;
public:
    void init()
    {
        FRONT = -1;
        REAR = -1;
    }
    void enqueue(int);
    int dequeue(void);
    void reverse(void);
    void display(void);
};

void Queue::reverse()
{
    int temp;
    while (FRONT - REAR < 0)
    {
        temp = line[REAR];
        line[REAR] = line[FRONT];
        line[FRONT] = temp;
        FRONT++;
        REAR--;
    }
}
void Queue::enqueue(int data)
{
    if (REAR == MAX - 1) return;
    if (FRONT == -1 && REAR == -1)
    {
        FRONT = 0;
        REAR = 0;
    }
    else
    {
        REAR++;
    }
    line[REAR] = data;
}

int Queue::dequeue()
{
    int val = 0;
    if (FRONT != -1 && FRONT <= REAR)
    {
        val = line[FRONT];
        line[FRONT] = 0;
        FRONT++;
    }
    return val;
}


void Queue::display()
{
    for (int i = 0; i <(int)(sizeof(line)/sizeof(line[0])); i++)
        std::cout << line[i] << "|";
    std::cout << "\n";
}



int main()
{
    Queue q1;
    q1.init();
    for (int i = 0; i < 10; i++)
        q1.enqueue(i);

    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.display();
    q1.display();
    q1.reverse();
    q1.display();
    return 0;
}
