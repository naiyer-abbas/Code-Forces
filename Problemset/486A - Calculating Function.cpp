#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long sum_odd, sum_even;
    cin>>n;

    if(n % 2 == 0)
    {
        sum_odd = (n/2) * (n/2);
        sum_even = (n/2) * (n/2 + 1);
    }

    else
    {
        sum_odd = (n/2 + 1) * (n/2 + 1);
        sum_even = (n/2) * (n/2 + 1);
    }


    cout<<sum_even - sum_odd;
}
