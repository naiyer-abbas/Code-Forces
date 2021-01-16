#include<bits/stdc++.h>
using namespace std;

#define pb push_back
# define ll long long

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    ll int s1, s2, s3, s4;

    cin>> s1 >> s2 >> s3 >> s4;

    vector <int> values;

    values.pb(s1);
    values.pb(s2);
    values.pb(s3);
    values.pb(s4);

    sort(values.begin(), values.end());

    vector <int> :: iterator ip;

     ip = unique(values.begin(), values.end());
    values.resize(distance(values.begin(), ip ));

    if(values.size() == 4)
    {
        cout << 0;
    }

    else if(values.size() == 3)
    {
        cout << 1;
    }

    else if(values.size() == 2)
    {
        cout << 2;
    }

    else if(values.size() == 1)
    {
        cout << 3;
    }



}
