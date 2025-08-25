#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* reverse(Node *head){
// Method 1
    /*vector<int> arr;
    Node* temp= head;

    while(temp){
        arr.push_back(temp->data);
        temp= temp->next;
    }

    int i = arr.size()-1;
    temp = head;

    while(temp){
        temp->data = arr[i--];
        temp=temp->next;
    }

    return head; */

    // Method 2
    Node* prev = NULL, *curr=head, *tail=NULL;
    while(curr){
        tail = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tail;
    }

    head = prev;
    return head;
}

int main() {
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

    // Print the linked list
    cout << "The Linked List: ";
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    head = reverse(head);
    cout << "The Reversed Linked List is: ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
