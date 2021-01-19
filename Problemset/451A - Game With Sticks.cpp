#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define mp make_pair

int main()
{
    ///////////////////////////////////////Improved Version//////////////////////////////////
    fast;

    int n, m;

    cin >> n >> m;

    int p = n * m;
    int count = 0;

    int small = (n <= m) ? n : m;

    count = small;

   /* while(p)
    {
        n -- ;
        m -- ;
        p = n * m;
        count ++ ;
    } */

    if(count % 2)
    {
        cout << "Akshat";
    }

    else
    {
        cout << "Malvika";
    }
}
