#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    vector <int> pessengers;
    int temp = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        temp -= a[i];
        temp += b[i];
        pessengers.push_back(temp);
    }
    cout<<*max_element(pessengers.begin(), pessengers.end());
}

