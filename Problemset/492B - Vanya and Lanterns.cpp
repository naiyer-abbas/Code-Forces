#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define pb push_back

int main()
{
    ll n, l;
    cin >> n >> l;

    vector <ll> lights;

    ll temp;
    lights.push_back(0);

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        lights.pb(temp);
    }

    sort(lights.begin(), lights.end());

    double min = -3.4;

    for(int i = 1; i < n + 1; i++)
    {
        if((lights.at(i) - lights.at(i - 1)) / 2.0 > min)
        {
            min = (lights.at(i) - lights.at(i - 1)) / 2.0;
        }

    }
    if(lights.at(1) > min)
    {
        min = lights.at(1);
    }

     if(l - lights.at(n) > min)
     {
         min = l - lights.at(n);
     }

     cout << setprecision(10) << min;
}
