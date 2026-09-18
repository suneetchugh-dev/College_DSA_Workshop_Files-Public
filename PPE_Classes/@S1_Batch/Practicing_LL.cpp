#include <iostream>
using namespace std;
//defining node structure in c++

struct Node
{
    int data; //data member 1
    Node* next; //data member 2
    Node (int data) {data=data; next = null} //made constructor : Node (int data_name) {data_name=data; next =null // initialise values in constructor}
};


//Performing operation on linked list

//doing append

void append(Node* &head, int value)
{
    Node* newNode = new Node(value); //made a new pointer newNode which is pointing to our newly created node using new Node(value)
    if(head == nullptr)
    {
        head = new Node;
    }
    else
    {
        Node* temp = head;
        while (temp -> next != nullptr)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}


//function to traverse and print the linked list


void printList(Node* head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout << temp -> data << "->";
        temp = temp -> next;
    }

    cout << "nullptr" << endl;
}


int main()
{
    Node* head = nullptr; //intialised empty linked list

    //Appending Nodes 
    append(head, 1);
    append(head, 2);
    append(head, 3);



    cout << "Linked List:" << " ";
    printList(head);

    return 0;
}