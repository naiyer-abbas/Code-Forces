#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,c = 0;
    string s;
    cin>>num>>s;
    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            s.erase(s.begin() + i);
            c++;
            i--;
        }
    }
    cout<<"\n"<<c;
}
