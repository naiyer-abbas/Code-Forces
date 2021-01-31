#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while(t --)
    {
        double n;
        cin >> n;
        double k,x;
        for(double i = 2; i < 1000000000; i++)
        {
            x = n / (pow(2.0,i) - 1);
            if(floor(x) == ceil(x))
            {
                cout << setprecision(15) <<  x << endl;
                break;
            }
        }
    }
}
