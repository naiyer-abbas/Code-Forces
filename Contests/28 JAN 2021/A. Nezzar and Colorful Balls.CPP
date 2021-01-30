#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;

    while(t -- )
    {
        int n;
        cin >> n;
        vector <int> record;
        int temp;
        int color = 1;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            record.pb(temp);
        }

        int arr[100001] = {};

        for(int i = 0; i < n; i++)
        {
            arr[record.at(i)] ++ ;
        }

        sort(arr, arr + 100001);

        cout << arr[100000]<<endl;


    }
}
