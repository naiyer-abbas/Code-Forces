#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fast ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back

int main()
{
    fast;
    int t;
    cin >> t;
    while(t)
    {
        int n;
        cin >> n;
        if(n >= 1 && n <= 10)
        {
            cout << 1 << endl << n <<endl;
        }

        else
        {
            vector <int> digits;
            int temp = n;
            int d = 0;  // no. of digits

            while(temp)
            {
                temp = temp / 10;
                d ++;
            }

            temp = n;

           for(int i = d-1; i >= 0; i--)
           {
               if(temp / (int) pow(10, i) * (int) pow(10 , i))
               digits.pb(temp / (int) pow(10, i) * (int) pow(10 , i));
               temp = temp % (int) pow (10 , i);
           }

           cout << digits.size() << endl;

           for(auto &e : digits)
           {
               cout << e << " ";
           }
           cout <<endl;

        }



       t--;
    }
}
