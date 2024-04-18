//
// Created by Admin on 2024/4/18.
//
#include <iostream>
#define Maxsize 5
using namespace std;
typedef struct {
    int data[Maxsize];
    int count;
    int front;
}Queue;
void InitQueue(Queue *&q)
{
    q=(Queue *) malloc(sizeof(Queue));
    q->front=0;
    q->count=0;
}
bool enQueue(Queue *&q,int a)
{
    int rear;
    if(q->count==Maxsize)
    {
        cout<<"FULL";
        return false;
    }
    else{
        rear=(q->front+q->count)%Maxsize;
        rear=(rear+1)%Maxsize;
        q->data[rear]=a;
        q->count++;
        return true;
    }
}
bool deQueue(Queue *&q)
{
    if(q->count==0)
    {
        cout<<"NULL";
        return false;
    }
    else{
        q->front=(q->front+1)%Maxsize;
        cout<<q->data[q->front];
        q->count--;
        return true;
    }
}

int main()
{
    Queue *q;
    InitQueue(q);
    enQueue(q,1);
    enQueue(q,2);
    enQueue(q,3);
    enQueue(q,4);
    enQueue(q,5);
    deQueue(q);
    enQueue(q,6);
    deQueue(q);
    deQueue(q);
    deQueue(q);
    deQueue(q);
    deQueue(q);
    deQueue(q);
}