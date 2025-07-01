#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Enter your Code...
    priority_queue<int> pq;
    pq.push(12);
    pq.push(60);
    pq.push(34);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    priority_queue<int, vector<int>, greater<int>> pqMin;
    pqMin.push(12);
    pqMin.push(60);
    pqMin.push(34);

    while (!pqMin.empty())
    {
        cout << pqMin.top() << " ";
        pqMin.pop();
    }


    return 0;
}