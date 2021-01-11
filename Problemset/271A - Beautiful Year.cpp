#include<bits/stdc++.h>
using namespace std;

int isunique(int);

int main()
{
  long long  int n;
  cin>>n;

    while(1)
    {
        n++;
        if(isunique(n))
        {
            cout<<n;
            break;
        }
    }
}

int isunique(int num)
{
    vector <int> temp;
    while (num)
    {
        temp.push_back(num % 10);
        num = num / 10;
    }

    for(int i = 0; i < temp.size(); i++)
    {
        for(int j = 0; j < temp.size(); j++)
        {
            if(temp.at(i) == temp.at(j) && i != j)
            {
                return 0;
            }
        }
    }
    return 1;
}
