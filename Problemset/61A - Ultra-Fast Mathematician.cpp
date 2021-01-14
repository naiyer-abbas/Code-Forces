#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
     string num1, num2;
    cin >> num1 >> num2;

    for( int i = 0; i < num1.size(); i++)
    {
        if(num1.at(i) - num2.at(i))
        {
            num2.at(i) = '1';
        }

        else
        {
            num2.at(i) = '0';
        }
    }
    cout<<num2;

    return 0;
}
