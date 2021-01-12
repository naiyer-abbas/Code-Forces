#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int answer[n];
    int i = 0;

    for( i = 0; i < n; i++)
    {
        cin>>answer[i];
        if(answer[i] == 1)
        {
            cout<<"HARD";
            break;
        }
    }
    if(i == n && answer[n-1] == 0)
    {
        cout<<"EASY";
    }

}
