#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0);    cin.tie(0); cout.tie(0);
#define pb push_back

int main()
{
    fast;
     int T;
     cin >> T;

     while(T)
     {
         int n;
         cin >> n;
         vector <int> v;
         int temp;

         for(int i = 0; i < n; i++)
         {
             cin >> temp;
             v.pb(temp);
         }

         sort(v.begin(), v.end());

         vector <int> :: iterator ip;

         ip = unique (v.begin(), v.end());

         v.resize(distance(v.begin(), ip));

         for(int i = 0; i < v.size(); i++)
         {
             if(i != (v.size() - 1) && v.at(i + 1) - v.at(i) == 1)
             {
                 v.at(i) = -1;
             }
         }

         int count = 0;
         int i = 0;

         for(i = 0; i < v.size(); i++)
         {
             if(v.at(i) != -1)
             {
                 count ++;
             }
             if(count >= 2)
             {
                 cout << "NO" << endl;
                 break;
             }
         }

         if(i == v.size())
         {
             cout << "YES" << endl;
         }




         T -- ;
     }
}
