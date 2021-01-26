#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int main()
{
    int k, r;
    cin >> k >> r;
    int x = 0;
    int a = 1;

    for(int i = 1; i < 123434; i++)
    {
       if((i * k) % 10 == 0)
       {
           cout << i;
           return 0;
       }

       else if(((i * k) % 10) == r)
       {
           cout << i;
           return 0;
       }



    }
}
