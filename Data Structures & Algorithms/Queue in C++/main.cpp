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
    void shift(void);
    void display(void);
    // void concat(Queue);
};

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

void Queue::shift()
{
    if (FRONT < 1) return;
    int offset = FRONT;
    while (FRONT <= REAR)
    {
        line[FRONT - offset] = line[FRONT];
        line[FRONT] = 0;
        FRONT++;
    }
    FRONT = 0;
    REAR = REAR - offset;
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
    q1.shift();
    q1.display();
    return 0;
}
