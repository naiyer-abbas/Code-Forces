#pragma GCC target ("avx2")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int is_valid(string s)
{
    if(s.at(s.size() - 1) % 2)
    {
        return 0;
    }

    return 1;
}

void fun(string &s)
{
    int mark = -1;
  for(int i = 0; i < s.size(); i++)
  {
      if(s.at(i) % 2 == 0)
      {
          if(s.at(s.size() - 1) > s.at(i))
          {
              swap(s.at(i), s.at(s.size() - 1));
              cout << s;
              return;
          }

          mark = i;
      }
  }

  if(mark != -1)
  {
      swap(s.at(s.size() - 1), s.at(mark));
      cout << s;
      return;
  }
  cout << -1;
}

int main()
{
    fast
    string s;
    cin >> s;
    fun(s);

}
