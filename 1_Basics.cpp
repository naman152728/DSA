#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    // Enter your Code...
    Node *Head;
    Head = NULL;

    int arr[] = {12, 23, 34, 45, 56};

    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        // Inserting the Elements At the beginning ~ Reverse of Linked List
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // Printing the Elements of the Linked List
    Node *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " " << temp->next << endl;
        temp = temp->next;
    }

    return 0;
}