#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";

    if(a < b)
        swap(a, b);

    cout << (a - b) / 2;


 return 0;
}
