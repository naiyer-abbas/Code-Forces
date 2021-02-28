#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int n;
    cin >> n;
    vector <int> v;
    vector <int> vc;
    int temp;
    int curr = -1;
    int total = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        v.pb(temp);
    }

    total = accumulate(v.begin(), v.end(), 0);


    vector <int> ans;
    ans.pb(total);


    for(int i = 0; i < n; i++)
    {
        if(v.at(i) == 0)
        {
            int count = 0;
            for(int j = i; j >= 0; j--)
            {
                if(v.at(j) == 0)
                {
                    count ++;
                    ans.pb(count);
                    ans.pb(total + count);
                }

                else
                {
                    total --;
                    ans.pb(total);
                }
            }

            ans.pb(total + count);
        }
    }

    cout << *max_element(ans.begin(), ans.end());
}
