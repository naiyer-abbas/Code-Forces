#include<bits/stdc++.h>
using namespace std;

int upperCount(string);
int lowerCount(string);

int main()
{
    string s;
    cin>>s;
    if(lowerCount(s) >= upperCount(s))
    {
       transform(s.begin(), s.end(), s.begin(), :: tolower);
       cout<<s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), :: toupper);
        cout<<s;
    }

}

int upperCount(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(isupper(s.at(i)))
            count ++;
    }

    return count;
}

int lowerCount(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(islower(s.at(i)))
            count ++;
    }

    return count;
}
