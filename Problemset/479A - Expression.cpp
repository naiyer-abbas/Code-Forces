#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin>>a>>b>>c;

    if(a > 1 && b > 1 && c > 1)
    {
        cout<< a * b * c;
    }

    else if(b == 1 && a <= c)
    {
        if(a == 1 && c == 1 )
        cout<< 3;

        else
            cout<< (a + b) * c;
    }

    else if(b == 1 && a >= c)
    {

        if(a == 1 && c == 1 )
        cout<< 3;

        else

        cout<< a * (b + c);
    }

    else if(c == 1 && b != 1)
    {
        if(a != 1)
        cout<< a * (b + c);

        else
            cout<< a + b + c;
    }

    else if(a == 1  && b != 1)
    {
        if(c != 1)
        cout<< (a + b) * c;

        else
            cout<< a + b + c;
    }

    else if(a == 1 && b == 1 && c == 1)
    {
        cout<< 3;
    }
    return 0;
}
