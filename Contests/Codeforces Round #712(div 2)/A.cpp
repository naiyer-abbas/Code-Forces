#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
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
        string s;
        cin >> s;

        vector <int> st;

        for(int i = 0; i < s.size(); i++)
        {
            if(s.at(i) == 'a')
            {
                st.pb((s.size() - i) - 1);
            }

        }

        sort(st.begin(), st.end());

        string temp;

        int check = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(binary_search(st.begin(), st.end(), i) == 0 && check == 0)
            {
                temp.pb('a');
                temp.pb(s.at(i));
                check = 1;
            }

            else
            {
                temp.pb(s.at(i));
            }
        }

        if(!check)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
            cout << temp << endl;
        }

    }
}
