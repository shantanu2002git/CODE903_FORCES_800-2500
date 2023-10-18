#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int nv, ncl;
bool color[MAXN];
vector<int> adj[MAXN];

int bfs(int start)
{
    vector<int> dis_v(nv + 1, -1);
    queue<int> q;
    q.push(start);
    dis_v[start] = 0;
    int mx = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : adj[u])
        {
            if (dis_v[v] == -1)
            {
                dis_v[v] = dis_v[u] + 1;
                q.push(v);
                if (color[v])
                    mx = max(mx, dis_v[v]);
            }
        }
    }

    return mx;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> nv >> ncl;
       memset(color, false, sizeof(color));
    
        for (int i = 0; i < ncl; i++)
        {
            int x;
            cin >> x;
            color[x] = true;
        }

        for (int i = 0; i < nv - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int mi = INT_MAX;
        for (int i = 1; i <= nv; i++)
        {
            mi = min(mi, bfs(i));
        }
        cout << mi << endl;

        // Clearing adjacency list for next test case
        for (int i = 1; i <= nv; i++)
            adj[i].clear();
    }
    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nv, ncl;
        cin >> nv >> ncl;
        set<int> color;
        for (int i = 0; i < ncl; i++)
        {
            int x;
            cin >> x;
            color.insert(x);
        }

        vector<int> adj[nv + 1];

        for (int i = 0; i < nv - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> dis_v(nv + 1, 1e9);
        int mi = 1e9;
        for (int i = 1; i <= nv; i++)
        {
            queue<int> q;
            vector<int> visited(nv + 1, 0);
            visited[i] = 1;
            int level = 0, mx = -1e9;

            q.push(i);

            // BFS traversal
            while (!q.empty())
            {
                int sz = q.size();
                while (sz--)
                {
                    int currentNode = q.front();
                    q.pop();
                    if (color.find(currentNode) != color.end())
                    {
                        mx = max(mx, level);
                    }

                    for (auto it : adj[currentNode])
                    {
                        if (!visited[it])
                        {
                            q.push(it);
                            visited[it] = 1;
                        }
                    }
                }
                level++;
                dis_v[i] = mx;
            }
            mi = min(mi, dis_v[i]); // Moved the calculation of minimum distance outside the loop
        }
        cout << mi << endl;
    }
    return 0;
}


*/