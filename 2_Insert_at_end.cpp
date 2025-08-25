#include <bits/stdc++.h>
using namespace std;
 
class Node {
    public:
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main()
{
    //Enter your Code...
    Node* Head;
    Head = NULL;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(Head == NULL)
        Head = new Node(arr[i]);

        // Inseting the Elements at the End of the Linked List
        else{
            Node* tail = Head;
            while(tail-> next != NULL)
                tail = tail->next;
            tail->next = new Node(arr[i]);
        }
    }

    // Printing the Elements of the Linked List
    Node* temp = Head;
    while(temp){
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}