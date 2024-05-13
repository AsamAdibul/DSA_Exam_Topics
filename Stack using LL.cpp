#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    if (top == NULL)
    {
        cout << "stack underflow" << endl;
        return -1;
    }
    else
    {
        Node *temp = top;
        int popValue = temp->data;
        top = top->next;
        delete temp;
        return popValue;
    }
}

int peek()
{
    if (top == nullptr)
    {
        cout << "stack underflow" << endl;
        return -1;
    }
    else
    {
        return top->data;
    }
}

void display()
{
    if (top == nullptr)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "All values in the Stack are " << endl;
        Node *current = top;

        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();

    pop();
    display();

    cout << "value at the top of the stack is: " << peek() << endl;

    return 0;
}