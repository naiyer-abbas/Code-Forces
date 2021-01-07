#include <bits/stdc++.h>

const int MAX = 100;
using namespace std;

int main(){
 int num;
 cin>>num;
 vector <string> s;
for(int i = 0; i<num; i++)
{
    string temp;
    cin>>temp;
    s.push_back(temp);

}
for(int i = 0; i<num; i++)
{
    if(s[i].size()<=10)
    {
        cout<<"\n"<<s[i];
    }
    else
    {
        cout<<"\n"<<s[i][0]<<s[i].size()-2<<s[i][s[i].size()-1];
    }
}
}

