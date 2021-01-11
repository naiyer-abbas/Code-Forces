#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h , width;
    width = 0;
    cin>>n>>h;
    int heights[n];

    for(int i = 0; i < n; i++)
    {
        cin>>heights[i];
        width ++;

        if(heights[i] > h)
            width++;
    }
    cout<<width;
}
