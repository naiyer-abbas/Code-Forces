#include <bits/stdc++.h>
using namespace std;

int main(){
 long long int a,m,n;
 cin>>n>>m>>a;
 long long int h_count, v_count, total_count = 0;
 if(n%a == 0)
 {
     h_count = n/a;
 }
 else
 {
     h_count = n/a + 1;
 }

 if(m%a == 0)
 {
     v_count = m/a;
 }
  else
 {
     v_count = m/a + 1;
 }
 total_count = h_count*v_count;
 cout<<total_count;
}

