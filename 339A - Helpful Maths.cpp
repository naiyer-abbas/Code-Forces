#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     cin>>s;
     vector <char> s1;
     int p = s.size();
   for(int i = 0; i< p; i+=2)
   {
       s1.push_back(s[i]);
   }
   sort(s1.begin() ,s1.end());
   string s2(s1.begin(), s1.end());
   for(int i =0; i<s2.size(); i++)
   {
       if(i != s2.size() - 1)
       {
           cout<<s2[i]<<"+";
       }
       else
       {
           cout<<s2[i];
       }
   }
    return 0;
}
