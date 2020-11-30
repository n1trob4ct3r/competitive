#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    int sum = 0;
    vector<pair<int, int> > adj[n+2];
    for (int i = 0; i < n-1; i++)
    {
        int x, y, w; cin>>x>>y>>w;
        adj[x-1].push_back(make_pair(y-1, w));
        adj[y-1].push_back(make_pair(x-1, w));
        sum+= w;
    }

    queue<pair<int, int> > q;
    int seen[n+1] = {};
    q.push(make_pair(0, 0));
    seen[0] = 1;
    int big = -1;

    while (!q.empty())
    {
        pair<int, int> s = q.front(); q.pop();
        big = max(big, s.second);

        for (auto t: adj[s.first])
        {
            if (!seen[t.first])
            {
                seen[t.first] = 1;
                q.push(make_pair(t.first, s.second + t.second));
            }
        }
    }
    
    cout<< (2*sum) - big<<endl;
}