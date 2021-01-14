#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    long double temp = 0.00000000;
    long double num;
    long double res;

    for(int i = 0; i < n; i++)
    {
        cin>>num;
        temp = temp + num / 100.00000000;
    }

    res = (temp / n) * 100.00000000;
    cout<<res;



return 0;
}
