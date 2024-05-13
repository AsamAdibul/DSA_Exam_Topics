#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void push(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

void pop()
{
    if (front == NULL)
    {
        cout << "No elements in queue" << endl;
        return;
    }
    Node *temp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }
    delete temp;
}

int peek()
{
    if (front == NULL)
    {
        cout << "No elements in queue" << endl;
        return -1;
    }
    return front->data;
}

bool empty()
{
    return front == NULL;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);

    cout << peek() << endl;
    pop();

    cout << peek() << endl;
    pop();

    cout << peek() << endl;
    pop();

    cout << peek() << endl;
    pop();

    cout << empty() << endl;

    return 0;
}
