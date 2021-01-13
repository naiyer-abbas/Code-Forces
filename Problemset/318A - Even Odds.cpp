#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin>>n>>k;

     if(n % 2 == 0 && k <= n/2)
     {
         cout<< 1 + (k-1) * 2;
     }

     else if(n % 2 && k <= n/2 + 1)
     {
         cout<< 1 + (k-1) * 2;
     }

     else if(n % 2 == 0 && k > n/2)
     {
         cout<< 2 + ((k - n/2) - 1) * 2;
     }

     else if(n % 2 && k > n/2 + 1)
     {
         cout<< 2 + (k - (n/2 + 2)) * 2;
     }


return 0;
}
