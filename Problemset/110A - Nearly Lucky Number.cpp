#include<bits/stdc++.h>

using namespace std;

int islucky(int);


int main()
{
    long long int n;
    cin>>n;
    long long int temp = n;
    int count = 0;

    while(temp)
    {
        if(temp % 10 == 4 || temp % 10 == 7)
            count ++;

        temp = temp / 10;
    }

    if(islucky(count))
        cout<<"YES";
    else
        cout<<"NO";
}

int islucky(int n)
{
    int temp = n;
    int p;
    vector <int> digits;

    while(temp)
    {
        p = temp % 10;
        if(p != 7 && p != 4)
        {
            digits.clear();
            break;
        }
        else
        {
            digits.push_back(p);
        }
        temp = temp / 10;
    }

    if(digits.empty())
        return 0;
    else
        return 1;
}
