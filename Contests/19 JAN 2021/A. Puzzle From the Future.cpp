#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define fast ios_base :: sync_with_stdio(0); cin.tie(0);

int main()
{
    int T;
    cin >> T;
    while(T)

    {
        int n;
        string b;
        cin >> n >> b;
        string d = b;
        string a = b;

        d.at(0) = b.at(0) + 1;
        a.at(0) = '1';

        for(int i = 1; i < b.size(); i++)
        {
            d.at(i) = b.at(i) + 1;
            a.at(i) = '1';

            if(d.at(i) == d.at(i - 1))
            {
                d.at(i) = b.at(i);
                a.at(i) = '0';
            }
        }

        cout << a << endl;



        T--;
    }
}
