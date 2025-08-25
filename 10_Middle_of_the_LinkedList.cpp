#include <bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node*next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node *middle(Node*head){
    // Method 1

    // int count = 0;
    // Node *temp = head;
    // while(temp != NULL){
    //     count++;
    //     temp = temp->next;
    // }

    // count /= 2;
    // temp = head;
    // while(count--){
    //     temp = temp->next;
    // }
    // return temp;

    // Method 2

    Node*slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    //Enter your Code...
    Node* head = NULL;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter node values: ";
    Node* tail = NULL;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        Node* newNode = new Node(val);

        if (!head) { // first node
            head = newNode;
            tail = newNode;
        } else { // append at the end
            tail->next = newNode;
            tail = newNode;
        }
    }

    head = middle(head);

    // Print the linked list
    cout << "The Linked List: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
 
    return 0;
}