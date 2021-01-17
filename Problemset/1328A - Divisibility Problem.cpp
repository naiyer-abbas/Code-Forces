#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while(T)
    {
            ll int a , b;
        int count = 0;;

        cin >> a >> b;

        if(a < b)
        {
            count = b - a;
            cout << count << endl;
        }

        else if(a == b)
        {
            cout << 0 << endl;
        }

        else
        {
           if(a % b)
           {
              count = ( b * (a / b + 1) ) - a;
              cout << count << endl;
           }

           else
           {
               cout << 0 << endl;
           }

        }

        T--;
    }


}
