//copying elements from stack to queue ;
#include <stdio.h>
int arr[5]={3,6,9,12,5},top=-1,size=5;
int stack[5];
int queue[5],front=0,rear=-1,i;
int main()
{
 push();
 print();
 enqueue();
 print1();

}
void push()
{
    if(top==size-1)
    {
        printf("Stack is full");
    }
    else
    {
        for(i=0;i<5;i++)
        {
            top++;
            stack[top]=arr[i];
        }
    }
}
void print()
{   printf("Stack elements are\n");
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}
void enqueue()
{
    if(rear==size-1)
    {
        printf("queue is full");
        
    }
    else
    {
        for(i=0;i<5;i++)
        {
            rear++;
            queue[rear]=stack[top];
            top--;
        }
        
    }
}
void print1()
{   printf("Queue elements are\n");
    if(front==0 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d  ",queue[i]);
        }
    }
}
