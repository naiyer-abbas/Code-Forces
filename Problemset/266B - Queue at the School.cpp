#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;

    while(t)
    {

        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == 'B' && s[i+1] == 'G')
            {
                swap(s[i],s[i+1]);
                i++;

            }
        }

        t--;
    }
    cout<<s;
}
