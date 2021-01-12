#include<bits/stdc++.h>
using namespace std;

int sum_array(int [], int);

int main()
{
    int n;
    cin>>n;
    vector <int> group_sizes;
    int taxi = 0;
    int h[5] = {0,0,0,0,0};
    int taxtarr[5] = {0,0,0,0,0};

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        group_sizes.push_back(temp);
        h[temp] ++;
    }


    taxtarr[4] = h[4];
    h[4] = 0;

    if(h[1] <= h[3])
    {
        taxtarr[3] = h[3];
        h[1] = 0;
        h[3] = 0;
    }

    else
    {
        taxtarr[3] = h[3];
        h[1] = h[1] - h[3];
        h[3] = 0;
    }


    if(h[2] % 2 == 0 && h[2]!=0)
    {
        taxtarr[2] = h[2] / 2;
        h[2] = 0;
    }

    else if(h[2] != 0)
    {
        taxtarr[2] = h[2] / 2 + 1;
        if(h[1] >= 2)
        {
            h[1] -= 2;
            h[2] = 0;
        }

        else if(h[1] == 1)
        {
            h[1] -= 1;
            h[2] = 0;
        }

        else
        {
            h[2] = 0;
        }
    }

    if(h[1] <= 4 && h[1] !=0)
    {
        taxtarr[1] = 1;
        h[1] = 0;
    }

    else if(h[1] > 4)
    {
        if(h[1] % 4)
        {
            taxtarr[1] = h[1] / 4 + 1;
            h[1] = 0;
        }

        else
        {
            taxtarr[1] = h[1] / 4;
            h[1] = 0;
        }

    }

    else
    {
        taxtarr[1] = 0;
        h[1] = 0;
    }

    cout<<sum_array(taxtarr, 5);



return 0;
}

int sum_array(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
