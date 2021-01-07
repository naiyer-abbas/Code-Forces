#include <bits/stdc++.h>
using namespace std;

int main(){
  int num , X = 0;
  cin>>num;
  string s;
  while(num)
  {
      cin>>s;
      if(s == "++X" || s == "X++")
        X++;

      if(s == "--X" || s =="X--")
        X--;

      num--;
  }

  cout<<X;
  return 0;
}

