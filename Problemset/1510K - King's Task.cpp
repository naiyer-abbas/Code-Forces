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

vector <int> operation1(vector <int> v)
{
    vector <int> vec = v;
    for(int i = 0; i < vec.size() - 1; i += 2)
    {
        swap(vec.at(i), vec.at(i + 1));
    }
    return vec;
}

vector <int> operation2(vector <int> v)
{
    vector <int> vec = v;
    int n = vec.size() / 2;
    for(int i = 0 ; i < n; i++)
    {
        swap(vec.at(i), vec.at(i + n));
    }

    return vec;
}

int solve(vector <int> v)
{
    int c1 = 0, c2 = 0;
    int i = 1;
    int br = 0;

    vector <int> vc = v;

    while(c1 <= 1000)
    {
        if(is_sorted(vc.begin(), vc.end()))
        {
            br = 1;
            break;
        }

        if(i % 2)
        {
            vc = operation1(vc);
            c1 ++;
        }

        if(is_sorted(vc.begin(), vc.end()))
        {
            br = 1;
            break;
        }

        if(i % 2 == 0)
        {
            vc = operation2(vc);
            c1 ++;
        }

        i ++;
    }

    vc = v;
    i = 1;

    if(!br)
    {
        c1 = -1;
    }

    br = 0;

    while(c2 <= 1000)
    {
        if(is_sorted(vc.begin(), vc.end()))
        {
            br = 1;
            break;
        }

        if(i % 2)
        {
            vc = operation2(vc);
            c2 ++;
        }

        if(is_sorted(vc.begin(), vc.end()))
        {
            br = 1;
            break;
        }

        if(i % 2 == 0)
        {
            vc = operation1(vc);
            c2 ++;
        }

        i ++;
    }

    if(!br)
    {
        c2 = -1;
    }

    if(c1 == -1 && c2 == -1)
    {
        return -1;
    }

    if(c1 == -1 && c2 != -1)
    {
        return c2;
    }

    if(c2 == -1 && c1 != -1)
    {
        return c1;
    }

    else
    {
        return min(c1, c2);
    }
}

int main()
{
    fast
    int n;
    cin >> n;
    vector <int> v(2 * n);
    for(int i = 0; i < 2 * n; i++)
    {
        cin >> v.at(i);
    }

    cout << solve(v);

}
