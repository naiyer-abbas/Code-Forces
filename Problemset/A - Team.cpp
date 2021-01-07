#include <bits/stdc++.h>
using namespace std;

int main(){
 int p,v,t,num,total=0;
 cin>>num;
 for(int i = 0; i<num; i++)
 {
     cin>>p>>v>>t;
     if(p && v || p && t || v&&t)
     {
         total++;
     }
 }
 cout<<"\n"<<total;


}

