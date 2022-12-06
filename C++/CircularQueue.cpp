#include <bits/stdc++.h>
#define max 6
using namespace std;

class Queue
{

public:
    int front = -1, rear = -1;
    bool isEmpty()
    {
        if(front == -1 && rear == -1) {
            return true;
        }
        return false;
    }
    void enqueue(int arr[], int value)
    {

        if (isEmpty())
        {
            front = 0;
            rear = 0;
            arr[rear] = value;
        }
        else if ((rear + 1) % max == front)
        {
            cout << "Queue is full !!";
        }
        else
        {
            arr[++rear] = value;
            cout << value << " has been inserted !";
        }
    }

    void dequeue(int arr[])
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
        }
        else if (front == rear)
        {
            // arr[front] == NULL;
            front = -1;
            rear = -1;
        }
        else
        {
            // arr[front] = NULL;
            int x = arr[front];
            cout << x << " has been deleted !";
            front = (front + 1) % max;
        }

    }
    void display(int arr[])
    {
        int i = front;
        while (!(i == rear + 1))
        {
            cout << arr[i % max] << " ";
            i++;
        }
    }
    int main()
    {
        int arr[max];
        int ch;
        do