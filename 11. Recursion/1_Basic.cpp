#include <bits/stdc++.h>
using namespace std;
 
int birthday(int n)
{
    if (n > 0)
    {
        cout << n << " days left for Birthday." << endl;
    }
    else{
        cout << "Happy Birthday To You !!!" << endl;
        exit(0);
    }

    return birthday(n-1);
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    birthday(n);
 
    return 0;
}