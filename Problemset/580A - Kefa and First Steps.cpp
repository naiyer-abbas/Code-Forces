#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    vector <int> a;
    long int temp = 0;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    long long int max = 0;
    int length = 0;
    vector <int> length_records;

    for(auto& e: a)
    {
        if(e >= max)
        {
            max = e;
            length++;
        }

        else
        {
            max = e;
            length_records.push_back(length);
            length = 1;
        }
    }
    length_records.push_back(length);
    if(length_records.empty())
        cout<<length;
    else
    cout<< *max_element(length_records.begin(), length_records.end());
}
