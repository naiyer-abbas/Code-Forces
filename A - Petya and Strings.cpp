#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2;
  int flag = 0;
  cin>>s1>>s2;
  for(int i = 0; i< s1.size(); i++)
  {
      if(s1[i] >= 65 && s1[i]<97)
      {
          s1[i] += 32;
      }
      if(s2[i] >= 65 && s2[i]<97)
      {
          s2[i] += 32;
      }
  }
  for(int i = 0; i<s1.size(); i++)
  {
      if(s1[i] > s2[i])
      {
          cout<<"\n1";
          flag = 1;
          break;
      }
      else if(s1[i] < s2[i])
      {
          cout<<"\n-1";
          flag = 1;
          break;
      }
  }
  if(flag == 0)
    cout<<"\n0";
  return 0;
}

