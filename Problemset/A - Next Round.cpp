#include <bits/stdc++.h>
using namespace std;

int main(){
 vector <int> scores;
 int n,k;
 cin>>n>>k;
 int temp,counter = 0;
 for(int i = 0; i<n; i++)
 {
     cin>>temp;
     scores.push_back(temp);
 }

 for(int i = 0; i<n; i++)
 {
     if(scores[i]>=scores[k-1] && scores[i]!=0)
        counter++;
 }
 cout<<"\n"<<counter;
}

