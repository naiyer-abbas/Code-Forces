#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        ll a, b;
        cin >> a >> b;
        ll temp = a;
        vector <int> arr(10);

        if(b == a)
        {
            cout << 2 << endl;
            continue;
        }

         for(int i = 0; i < 10; i++)
        {
            arr[i] = i;
        }

        if(b == 1)
        {
            b++;

            for(int i = 0; i < 10; i++)
            {
                arr[i] ++;
            }
        }


        for(ll i = 0; i < 10; i++)
        {
            temp = a;
            while(temp)
            {
                temp = temp / (b + i);
                arr[i] ++;
            }
        }

        cout << *min_element(arr.begin(), arr.end()) << endl;
    }
}
