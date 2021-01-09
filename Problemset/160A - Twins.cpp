#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> values;
    int temp;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        values.push_back(temp);
    }

    int total_sum = accumulate(values.begin(), values.end(), 0);
    sort(values.begin(), values.end());
    int remaining_sum = total_sum;
    int count = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(total_sum - remaining_sum <= remaining_sum)
        {
            remaining_sum = remaining_sum - values[i];
            count ++;
        }

        else
        {
            break;
        }
    }
    cout<<count;
}
