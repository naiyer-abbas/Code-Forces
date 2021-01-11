#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p[n+1];
    int q[n+1];

    for(int i = 1; i < n+1; i++)
    {
        cin>>p[i];
        q[p[i]] = i;
    }

    for(int i = 1; i < n + 1; i++)
    {
        cout<<q[i]<<" ";
    }
}
