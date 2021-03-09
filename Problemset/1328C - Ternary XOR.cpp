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
        int n;
        string x;
        cin >> n >> x;
        string a = "1",b = "1";
        int inversion = 0;
        int check = 0;
        for(int i = 1; i < x.size(); i++)
        {
            if(x.at(i) == '0')
            {
                a.pb('0');
                b.pb('0');
            }

            else if(x.at(i) == '1')
            {
                a.pb('0');
                b.pb('1');
                if(a.at(i) != b.at(i))
                {
                    inversion = 1;
                    if(!check) // to make sure that inversion happens only once //
                    {
                       swap(a, b);
                       check = 1;
                    }

                }
            }

            else if(x.at(i) == '2')
            {
                if(!inversion)
                {
                    a.pb('1');
                    b.pb('1');
                }

                else
                {
                    a.pb('0');
                    b.pb('2');
                }
            }
        }
        cout << a << endl << b << endl;
    }
}
