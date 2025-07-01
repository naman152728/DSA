#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {40, 30, 10, 20};
    int m = 2, n = 4;
    int st = 0, end = 0, ans, mid;
    for (int i = 0; i < n; i++)
    {
        st = max(st, arr[i]);
        end += arr[i];
    }

    while (st <= end)
    {
        mid = st + (end - st) / 2;

        int pages = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }

        if (count >= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
