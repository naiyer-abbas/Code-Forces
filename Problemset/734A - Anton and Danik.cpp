#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    string s;
    int A_count = 0 , D_count = 0;

    cin>>n>>s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == 'A')
            A_count++;
        else if(s.at(i) == 'D')
            D_count++;
    }

    if(A_count > D_count)
        cout<<"Anton";
    else if(A_count < D_count)
        cout<<"Danik";
    else
        cout<<"Friendship";

}
