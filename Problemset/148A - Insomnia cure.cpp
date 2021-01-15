#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int unharmed = 0;
    int k1, l1, m1, n1;

    for(int i = 1; i <= d; i++)
    {
        k1 = i % k;
        l1 = i % l;
        m1 = i % m;
        n1 = i % n;

        if(k1 && l1 && m1 && n1)
        {
            unharmed ++;
        }
    }

    int harmed = d - unharmed;

    cout << harmed;



}
