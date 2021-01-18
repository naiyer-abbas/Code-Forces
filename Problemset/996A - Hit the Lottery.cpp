#include<bits/stdc++.h>
using namespace std;

#define fast ios_base :: sync_with_stdio(0); cin.tie(0);
#define ll long long int

int main()
{
    ll n;
    cin >> n;

    ll temp1 , temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9;

    temp1 = n / 100;
    temp2 = n % 100;
    temp3 = temp2 / 20;
    temp4 = temp2 % 20;
    temp5 = temp4 / 10;
    temp6 = temp4 % 10;
    temp7 = temp6 / 5;
    temp8 = temp6 % 5;
    temp9 = temp8 / 1;

    cout << temp1 + temp3 + temp5 + temp7 + temp9;

}
