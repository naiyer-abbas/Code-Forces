#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int score = min(n / k, m);
        int cards_left = n - score;
        m = m - score;
        int arr[k - 1] = {};
        while(m)
        {
            for(int i = 0; i < k - 1; i++)
            {
                arr[i] ++;
                m --;
                if(m <= 0 || arr[i] >= n / k)
                {
                    break;
                }
            }
        }

        int mx = *max_element(arr, arr + (k - 1));
        if(score - mx <= 0)
        {
            cout << 0 << endl;
            continue;
        }
        cout << score - mx << endl;
    }
}
