#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int remaining_time = 240;
    int time = 0;
    int i = 1;

    for( i = 1; i <= n; i++)
    {
        time += (5 * i);
        remaining_time = 240 - time;

        if(remaining_time < k)
        {
            cout << i - 1;
            return 0;
        }

        else if(remaining_time == k)
        {
            cout << i;
            return 0;
        }
    }

    cout << i - 1;
}
