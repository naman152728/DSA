#include <bits/stdc++.h>
using namespace std;

void Brute(vector<int> num, int n)
{
    int count= 0, k = 0;
    vector<int> temp(n);
    for(int i = 0; i < n; i++)
    {
        if(num[i] != 0)
        {
            temp[k] = num[i];
            k++;
        }
        else
        count++;
    }
    for(int i = 0; i < count; i++)
    {
        temp.push_back(0);
    }

    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

void Optimal (vector<int> num, int n)
{
    int j = -1;
    for(int i = 0; i < n; i++)
    {
        if(num[i] == 0)
            {
                j = i;
                break;
            }
    }
    for(int i = j+1; i < n; i++)
    {
        if(num[i] != 0)
        {
            swap(num[i], num[j]);
            j++;
        }    
    }

    for(int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    // Brute(num, n);

    Optimal (num, n);    

 
    return 0;
}