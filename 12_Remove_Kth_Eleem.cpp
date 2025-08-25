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

Node *remove(Node *head, int n)
{
    if (n == 1)
        return NULL;

    int count = 0;
    Node *curr = head, *prev = NULL;

    while (curr)
    {
        if (count == n)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }

    return head;
}

int main()
{
    // Enter your Code...
    Node *head = NULL;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";
    Node *tail = NULL;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;
        Node *newNode = new Node(val);

        if (!head)
        { // first node
            head = newNode;
            tail = newNode;
        }
        else
        { // append at the end
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
    cout << "Enter the Num: ";
    cin >> k;

    head = remove(head, k);

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}