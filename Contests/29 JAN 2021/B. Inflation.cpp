    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define pb push_back
    #define mp make_pair
    #define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

    int main()
    {
        fast;
        int t;
        cin >> t;
        while(t -- )
        {
            double n, k;
            cin >> n >> k;
            double p = 0;
            double temp;
            vector <double> prices;
            vector <double> r;
            double x;

            for(int i = 0; i < n; i++)
            {
                cin >> temp;
                prices.pb(temp);

                if(i == 0)
                {
                     x = prices[0];
                }
                if(i)
                {
                    r.pb(temp / p);
                }

                if(i && r.at(i - 1) > (k / 100))
                {
                    prices[0] = prices[0] + ceil((((prices[i] * 100) / k) - p));
                    p += ceil((((prices[i] * 100) / k) - p));
                }
                p += temp;
            }

            cout << setprecision(12) <<  prices[0] - x <<flush << endl;


        }
    }
