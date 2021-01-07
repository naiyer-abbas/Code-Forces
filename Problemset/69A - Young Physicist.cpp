#include<bits/stdc++.h>
using namespace std;

class Force
{
    int x = 0;
    int y = 0;
    int z = 0;

public:
    void getdata()
    {
        cin>>x>>y>>z;
    }

    Force operator + (Force const &F1)
    {
        Force F;
        F.x = x + F1.x;
        F.y = y + F1.y;
        F.z = z + F1.z;
        return F;
    }

    int is_equilibrium()
    {
        if(x || y || z)
            return 0;
        else
            return 1;
    }

};

int main()
{
    int num;
    cin>>num;
    Force F[num];
    Force temp;
    for(int i = 0; i<num; i++)
    {
        F[i].getdata();
    }

    for(int i = 0; i<num; i++)
    {
        temp = temp + F[i];
    }

    if(temp.is_equilibrium())
    {
        cout<<"YES";
    }

    else
        cout<<"NO";


}
