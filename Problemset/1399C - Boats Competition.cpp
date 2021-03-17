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
    fast
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;

        vector <int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        if(n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        if(n == 2)
        {
            cout << 1 << endl;
            continue;
        }

        sort(v.begin(), v.end());

        int mn_sum = v.at(0) + v.at(1);
        int mx_sum = v.at(n - 1) + v.at(n - 2);

        vector <int> arr(mx_sum + 1, 0);



        for(int i = mn_sum; i <= mx_sum; i++)
        {
            unordered_set <int> s;
            for(int j = 0; j < n; j++)
            {
                for(int k = j + 1; k < n; k++)
                {
                    if(v.at(j) + v.at(k) == i)
                    {
                        if(s.find(j) == s.end() && s.find(k) == s.end())
                        {
                            arr[i] ++;
                            s.insert(j);
                            s.insert(k);
                            break;
                        }
                    }
                }
            }
        }

        cout << *max_element(arr.begin(), arr.end()) << endl;
    }
}
