#include <bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* CreateLL(int arr[], int i, int size, Node*prev){
    if(i==size)
    return prev;

    Node*temp = new Node(arr[i]);
    temp->next= prev;
    return CreateLL(arr, i+1, size, temp);
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

    Node* Head = NULL;
    Head = CreateLL(arr, 0, n, Head);

    Node*temp = Head;
    while(temp){
        cout << temp->data<<" ";
        temp = temp->next;
    }
 
    return 0;
}