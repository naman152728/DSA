// Linear Search using Vector

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector <int> v1 = {42, 17, 93, 58, 76, 24, 89, 12, 34, 67};
    int key, flag = 0;
    cout << "Enter the Key to be searched: ";
    cin >> key;

    for (int i : v1)
    {
        if(key == i)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Key is Found !!"<< endl;
    }
    else
    {
        cout << "Key is Not Found !!" << endl;
    }
}