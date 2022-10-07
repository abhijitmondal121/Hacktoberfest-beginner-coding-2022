// No. of Connected Componenets

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float double

class node
{
public:
    node(){};
    int u;
    int v;
    node(int first, int second)
    {
        u = first;
        v = second;
    }
};

int findPar(int u, vector<int> &parent)
{
    if (parent[u] == u)
        return u;
    return parent[u] = findPar(parent[u], parent);
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank)
{
    int pu = findPar(u, parent);
    int pv = findPar(v, parent);
    if (rank[pu] < rank[pv])
    {
        parent[pu] = pv;
    }
    else if (rank[pv] < rank[pu])
    {
        parent[pv] = pu;
    }
    else
    {
        parent[pv] = pu;
        rank[pu]++;
    }
}

signed main()
{
    int v, e;
    cout << "Enter The number of vertices in the graph : ";
    cin >> v;
    cout << "Enter The number of edges in the graph : ";
    cin >> e;
    vector<int> adj[v + 1];

    int a, b;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> parent(v + 1, 0);
    vector<int> rank(v + 1, 1);
    for (int i = 1; i <= v; i++)
        parent[i] = i;

    for (int i = 1; i <= v; i++)
    {
        for (auto it : adj[i])
        {
            unionn(i, it, parent, rank);
        }
    }
    set<int> s;
    for (int i = 1; i <= v; i++)
    {
        s.insert(parent[i]);
    }

    cout << "total Connected Componenets in the graph are " << s.size() << endl;
    cout << "Parent Array is " << endl;

    for (int i = 1; i <= v; i++)
    {
        cout << i << " --- " << parent[i] << endl;
    }

    return 0;
}