#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
 cin>>s;
 for(int i =0; i< s.size(); i++)
 {
    if(s[i]<97 && s[i]>=65)
    {
        s[i] = s[i] + 32;
    }

 }
 for(int i = 0; i< s.size(); i++ )
 {


 if(s[i] == 97 || s[i] == 121 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
    {
        s[i] = '\0';
    }
 }
  string s1;
 for(int i = 0; i< s.size(); i++ )
 {
    if(s[i] != '\0')
    {
        s1.push_back(s[i]);
    }
 }
int p = s1.size();
 for(int i = 0; i<p; i++ )
 {
     s1.push_back('\0');
 }

 for(int i = s1.size(); i>=0; i--)
 {
     s1[i] = s1[i/2];
     s1[i/2] = '.';
 }
 cout<<"\n"<<s1;
}

