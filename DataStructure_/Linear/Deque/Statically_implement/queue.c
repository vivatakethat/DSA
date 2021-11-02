

/*
https://data-flair.training/blogs/queue-in-c-cpp/

*/

#include<stdio.h>




#define LIMIT 100

int queueData[LIMIT]={0};


bool insert(int data);
bool  remove();

int front=0,rear=0;



bool insert(int data)
{
if (rear>LIMIT-1)
{
printf("Error Queue is full ");
    return -1;
}
queueData[rear]=data;
rear++;
}

bool remove()
{
if (front==rear)
{printf("Error Queue is Empty ");
    return -1;

}

queueData[front]=0;
front++;

}

int main()
{


    return 0;
}