#include <bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next = NULL;
    }
};

Node* CreateLL(int arr[], int i, int n){
    if(i==n)
    return NULL;

    Node*temp = new Node(arr[i]);
    temp->next = CreateLL(arr,i+1,n);
    return temp;
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
 
    Node * Head = CreateLL(arr,0, n);

    cout<<"The Linked List Stores: ";
    Node*temp = Head;
    while(temp){
        cout << temp->data<<" ";
        temp = temp->next;
    }

    bool isDelete;
    cout << "\nWould you like to delete the last element ?? ";
    cin>> isDelete;

    if(isDelete){
        Node*tail = Head;
        Node* prev = Head;
        while(tail->next != NULL){
            prev =tail;
            tail = tail->next;
        }
        prev->next = NULL;
        delete tail;
        
    }

    temp = Head;
    while(temp){
        cout << temp->data<<" ";
        temp = temp->next;
    }
 
    return 0;
}