#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);
#define MOD 1000000007

int c = 0;
int rec[100001] = {};
int ans = 0;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].pb(v);
    adj[v].pb(u);
}

int dfs(vector<int> adj[], int s, int n, int m, int arr[])
{
    vector <bool> visited(n + 1, false);
    stack <int> st;
    st.push(s);

    while(st.empty() == 0)
    {
        s = st.top();
        st.pop();
        if(rec[s] > m)
        {
            visited[s] = false;
            continue;
        }

        if(!visited[s])
        {
            //cout << s << " ";
            visited[s] = true;
            c = rec[s];
        }

        for (auto & e : adj[s])
        {
           if (!visited[e])
           {
               st.push(e);
               if(arr[e] == 1)
               {
                   rec[e] = c + 1;
               }
               else
               {
                   rec[e] = 0;
               }
           }

        }

    }

    for(int i = 1; i < n + 1; i++)
    {
        if(adj[i].size() < 2 && visited[i] && i != 1)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    fast;
    int n, m, temp;
    cin >> n >> m;
    vector <int> v(n + 1); //  This vector stores all the numbers from 1 to n //

    for(int i = 1; i < n + 1; i++)
    {
        v.at(i) = i;
    }

    int arr[n + 1]; // arr[i] tells whether there is a cat on that vertex or not//

    for(int i = 1; i < n + 1; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }

    int temp1, temp2;

    vector <int> adj[n + 1];  //  adjacency list for graph traversal //

    for(int i = 0; i < n - 1; i++)
    {
        cin >> temp1 >> temp2;
        addEdge(adj, temp1, temp2);
    }

    rec[1] = arr[1];

    cout << dfs(adj, 1, n, m, arr);
}
