
#pragma GCC target ("avx2")
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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;

        int ac = a, bc = b;

        int c0 = 0, c1 = 0, c2 = 0;
        int br = 0;


        int j = s.size() - 1;

        for(int i = 0; i < s.size() / 2; i++)
        {
            if(s.at(i) == '1')
            {
                if(i != j && s.at(j) == '1')
                {
                    b -= 2;
                }

                else if(i != j && s.at(j) == '0')
                {
                    cout << -1 << endl;
                    br = 1;
                    break;
                }

                else if(i != j && s.at(j) == '?')
                {
                    s.at(j) = '1';
                    b -= 2;
                }


            }

            else if(s.at(i) == '0')
            {
                if(i != j && s.at(j) == '0')
                {
                    a -= 2;
                }

                else if(i != j && s.at(j) == '1')
                {
                    cout << -1 << endl;
                    br = 1;
                    break;
                }

                else if(i != j && s.at(j) == '?')
                {
                    s.at(j) = '0';
                    a -= 2;
                }
            }

             else
                {
                    if(s.at(j) == '1')
                    {
                        s.at(i) = '1';
                        b -= 2;
                    }

                    else if(s.at(j) == '0')
                    {
                        s.at(i) = '0';
                        a -= 2;
                    }
                }

            if(i == j)
                {
                    if(s.at(i) == '1')
                    {
                        b --;
                    }

                    else if(s.at(i) == '0')
                    {
                        a --;
                    }
                }



                j --;

        }

        int i = 0;
        j = s.size() - 1;

        while(i <= j)
        {
            if(s.at(i) == '?' && s.at(j) == '?')
            {
                if(i == j)
                {
                    if(a > 0)
                    {
                        s.at(i) = '0';
                        a --;
                    }

                    else if(b > 0)
                    {
                        s.at(i) = '1';
                        b --;
                    }

                    else
                    {
                        br = 1;
                        cout << -1 << endl;
                        break;
                    }
                }

                else
                {
                    if(a > 1)
                    {
                        s.at(i) = s.at(j) = '0';
                        a -= 2;
                    }

                    else if(b > 1)
                    {
                        s.at(i) = s.at(j) = '1';
                        b -= 2;
                    }

                    else
                    {
                        cout << -1 << endl;
                        br = 1;
                        break;
                    }
                }
            }
            i ++;
            j --;
        }

        if(!br)
        {
            int cc0 = 0, cc1 = 0;
            for(auto &e : s)
            {
                if(e == '1')
                {
                    cc1 ++;
                }

                else if(e == '0')
                {
                    cc0 ++;
                }
            }

            if(cc1 == bc && cc0 == ac)
            {
                cout << s << endl;
                continue;
            }


            {
                cout << -1 << endl;
            }

        }




    }
}
