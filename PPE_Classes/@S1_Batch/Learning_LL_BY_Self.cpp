#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
};


void insertNode(Node ** head, int newData)
{
    Node * newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head;
    *head = newNode;
}

void printList(Node * head)
{
    while(head != nullptr)
    {
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << "nullptr" << endl;
}

void deleteList(Node ** head)
{
    Node * current = *head;
    Node* next;

    while(current != nullptr)
    {
        next = current -> next;
        delete current;
        current = next;
    }

    *head = nullptr;
}

int main()
{
    Node * head = nullptr;

    insertNode(&head. 3);
    insertNode(&head, 2);
    insertNode(&head, 1);

    printList(head);

    deleteList(&head);

    return 0;
}