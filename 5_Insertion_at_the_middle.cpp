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

    Node*temp=new Node(arr[i]);
    temp->next = CreateLL(arr, i+1, n);
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

    // Insertion at the middle
    int index, val;
    cout << "Enter the index to insert at: ";
    cin >> index;
    cout << "Enter the value to insert: ";
    cin >> val;

    Node*temp = Head;
    index--;
    while(index--)
        temp = temp->next;
    
    Node* temp2 = new Node(val);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = Head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}