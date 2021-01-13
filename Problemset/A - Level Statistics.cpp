#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n;
    cin>>T;

    do
    {
        T--;
        cin>>n;
        vector <int> pi;
        vector <int> ci;
        int temp1, temp2;

        for(int i = 0; i < n; i++)
        {
            cin>>temp1>>temp2;
            pi.push_back(temp1);
            ci.push_back(temp2);
        }

        int i = 0;

        for(i = 0; i < n; i++)
        {
            if(ci.at(i) > pi.at(i) || is_sorted(pi.begin(), pi.end()) == false || is_sorted(ci.begin(), ci.end()) == false || (i != n -1 && ci.at(i + 1) - ci.at(i) > pi.at(i + 1) - pi.at(i)))
            {
                    cout<<"NO\n";
                    break;
            }

        }

        if(i == n)
            cout<<"YES\n";

    } while(T);
}
