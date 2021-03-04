#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define db double
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(int n,int U,int R,int D,int L)
{
    if((U+D)>(R+L))
    {
        if(U==n)
        {
            R--;
            L--;
        }
        else if(U==(n-1))
        {
            if(R>L)
            {
                R--;
            }
            else
            {
                L--;
            }
        }
        if(D==n)
        {
            R--;
            L--;
        }
        else if(D==(n-1))
        {
            if(R>L)
            {
                R--;
            }
            else
            {
                L--;
            }
        }
        if(R<0||L<0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    else
    {
        if(R==n)
        {
            D--;
            U--;
        }
        else if(R==(n-1))
        {
            if(U>D)
            {
                U--;
            }
            else
            {
                D--;
            }
        }
        if(L==n)
        {
            U--;
            D--;
        }
        else if(L==(n-1))
        {
            if(D>U)
            {
                D--;
            }
            else
            {
                U--;
            }
        }
        if(U<0||D<0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t)
    {
        int n,U,R,D,L;
        cin>>n>>U>>R>>D>>L;
        solve(n,U,R,D,L);
        t--;
    }
    return 0;
}
