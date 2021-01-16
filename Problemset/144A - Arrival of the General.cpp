#include<bits/stdc++.h>
using namespace std;

int index_of_min_element(int [], int);
int index_of_max_element(int [], int);

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int *heights = new int[n];
    //int heights[n];

    for(int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int min_index = index_of_min_element(heights, n);
    int max_index = index_of_max_element(heights, n);

    //cout<<min_index<<endl;
    //cout<<max_index<<endl;



    int count = 0;

    if(n == 2)
    {
        if(heights[0] >= heights[1])
            cout<<0;
        else
            cout<<1;
    }

    else
    {
        if(max_index > min_index)
            count = -1;
       while(max_index != 0 || min_index != n-1)
    {
        if(min_index != n-1)
        {
            min_index ++;
            count ++;
        }

        if(max_index != 0)
        {
            max_index--;
            count ++;
        }
    }

    cout<<count;
    }



}


int index_of_min_element(int arr[], int n)
{
    int min_value = arr[n-1];
    int min_index = n-1;
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] < min_value)
        {
            min_value = arr[i];
            min_index = i;
        }
    }

    return min_index;
}

int index_of_max_element(int arr[], int n)
{
    int max_value = arr[0];
    int max_index = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max_value)
        {
            max_value = arr[i];
            max_index = i;
        }
    }

    return max_index;
}
