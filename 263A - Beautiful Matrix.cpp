#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0;
    int matrix[5][5];
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            if(matrix[i][j])
            {
                c = abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<"\n"<<c;

    return 0;
}
