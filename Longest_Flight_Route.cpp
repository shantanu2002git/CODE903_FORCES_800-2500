#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define INF LLONG_MIN

// Function to find the longest path using a modified Dijkstra's algorithm
ll dijkstra(ll n, vector<pair<ll, ll>> adj[], vector<ll> &path)
{
    vector<ll> dist(n + 1, INF);
    vector<ll> parent(n + 1, -1);
    priority_queue<pair<ll, ll>> pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty())
    {
        ll d = -pq.top().first;
        ll node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            int v = it.first, w = it.second;
            if (dist[v] < dist[node] + w)
            {
                dist[v] = dist[node] + w;
                parent[v] = node;
                pq.push({-dist[v], v});
            }
        }
    }

    if (dist[n] == INF)
        return INF;

    for (ll v = n; v != -1; v = parent[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    return dist[n];
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> adj[n + 1];
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back({y, 1}); // using weight 1 for each edge
    }

    vector<ll> path;
    ll len = dijkstra(n, adj, path);

    if (len == INF)
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        cout << path.size() << endl; // Number of nodes in the longest path
        for (auto node : path)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    return 0;
}
