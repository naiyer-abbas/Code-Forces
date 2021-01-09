#include<bits/stdc++.h>
using namespace std;
int islucky(int);

int main()
{
    int num;
    cin>>num;
    int i = 1;

    if(islucky(num))
        cout<<"YES";

    else
    {
        for(i = 1; i <= 500; i++ )
        {
            if((num % i) == 0  && islucky(i))
            {
                cout<<"YES";
                break;
            }
        }
    }

    if(i == 501)
    {
        cout<< "NO";
    }

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
