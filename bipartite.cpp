// Program to Check if a graph is bipartite or not???

#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> vec[], int u, int v)
{
    vec[u].push_back(v);
    vec[v].push_back(u);
}

bool is_bipartite(vector<int> vec[], int n)
{
    vector<int> side(n, -1);
    bool is_bipartite = true;
    queue<int> q;
    for (int st = 0; st < n; ++st)
    {
        if (side[st] == -1)
        {
            q.push(st);
            side[st] = 0;
            while (!q.empty())
            {
                int v = q.front();
                q.pop();
                for (int u : vec[v])
                {
                    if (side[u] == -1)
                    {
                        side[u] = side[v] ^ 1;
                        q.push(u);
                    }
                    else
                    {
                        is_bipartite &= side[u] != side[v];
                    }
                }
            }
        }
    }
    return is_bipartite;
}

int main()
{

    // int n = 4;
    // vector<int> vec[n];
    // add_edge(vec, 0, 1);
    // add_edge(vec, 0, 2);
    // add_edge(vec, 1, 3);
    // add_edge(vec, 2, 3);

    int n = 5;
    vector<int>vec[n];
    add_edge(vec, 0, 1);
    add_edge(vec, 0, 3);
    add_edge(vec, 1, 2);
    add_edge(vec, 3, 4);
    add_edge(vec, 2, 4);

    if (is_bipartite(vec, n) == false)
    {
        cout << "Graph is not bipartite" << endl;
    }
    else
    {
        cout << "Graph is bipartite" << endl;
    }
    return 0;
}
