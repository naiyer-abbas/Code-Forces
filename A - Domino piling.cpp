#include <bits/stdc++.h>
using namespace std;

int main(){
  int m,n,x,c_h, c_v = 0, total = 0;
  cin>>m>>n;
  int order = m*n;
  if(m%2 == 0 && n%2 == 0)
  {
      c_h = m/2;
      c_v = n;
      total = c_h * c_v;
  }

  else if(m % 2 == 0 && n % 2)
  {
      c_h = m/2;
      c_v = n;
      total = c_h * c_v;
  }

  else if(m % 2 && n % 2 == 0)
  {
      c_h = m;
      c_v = n/2;
      total = c_h * c_v;
  }

  else
  {
      total = ((m*n) - 1) / 2;
  }

  cout<<"\n"<<total;

}

