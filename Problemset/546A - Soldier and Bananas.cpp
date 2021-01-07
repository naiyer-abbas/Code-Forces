#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, total_cost, money_borrowed;
    cin>>k>>n>>w;
    total_cost = k * (w*(w+1))/2;
    if(total_cost <= n)
    {
        money_borrowed = 0;
    }

    else
    {
        money_borrowed = total_cost - n;
    }

    cout<<money_borrowed;



}
