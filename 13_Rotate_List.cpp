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

Node *rotate(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    // Count the length
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    k %= count;
    if (k == 0)
        return head;

    // Find the (count - k)th node
    count -= k;
    Node *curr = head;
    Node *prev = NULL;
    while (count--)
    {
        prev = curr;
        curr = curr->next;
    }

    // prev is the new tail, curr is the new head
    prev->next = NULL;

    // Find the end of the rotated part
    Node *tail = curr;
    while (tail->next)
        tail = tail->next;

    tail->next = head;

    return curr;
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

    head = rotate(head, k);

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}