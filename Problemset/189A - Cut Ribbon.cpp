#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair

int ispos_int(double);

int main()
{
    fast;
    double n, a, b, c;
    cin >> n >> a >> b >> c;
    double p[3] = {a, b, c};
    sort(p, p + 3);
    double z;
    //cout << 5 / p[0];
    int max = 0;

    for(int x = 0; x <= n; x++)
    {
        for(int y = 0; y <= n; y++)
        {
            z = double((n - (p[0] * x + p[1] * y)) / p[2]);
            if(ispos_int(z) && (x + y + z) > max)
            {
                max = x + y + z;
            }
        }
    }
  cout << max;

}

int ispos_int(double n)
{
    if(ceil(n) == floor(n) && n >= 0)
        return 1;
    else
        return 0;
}
