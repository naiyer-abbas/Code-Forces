#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector <int> config;
    int temp;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        config.push_back(temp);
    }

    sort(config.begin(), config.end());

    for(const auto& e: config)
    {
        cout<<e<<" ";
    }
}
