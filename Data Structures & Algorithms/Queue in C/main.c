#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int Queue[MAX];
int FRONT = -1;
int REAR = -1;

void enqueue(int data)
{
    if (REAR == MAX -1)
        return;

    if (FRONT == -1 && REAR == -1)
    {
        FRONT = 0;
        REAR = 0;
    }
    else
    {
        REAR++;
    }
    Queue[REAR] = data;
}

int dequeue()
{
    int val = 0;
    if (FRONT != -1 && FRONT <= REAR)
    {
        val = Queue[FRONT];
        Queue[FRONT] = 0;
        FRONT++;
    }
    return val;
}

void display_queue()
{
    for (int i = 0; i < MAX; i++)
        printf("%2d|", Queue[i]);

    printf("\n");
}

void reshift()
{
    if (FRONT < 1) return;
    int offset = FRONT;
    while (FRONT <= REAR)
    {
        Queue[FRONT - offset] = Queue[FRONT];
        Queue[FRONT] = 0;
        FRONT++;
    }
    FRONT = 0;
    REAR = REAR - offset;
}

int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(11);
    enqueue(16);
    display_queue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display_queue();
    reshift();
    display_queue();
    dequeue();
    display_queue();
    enqueue(21);
    display_queue();
    return 0;
}
