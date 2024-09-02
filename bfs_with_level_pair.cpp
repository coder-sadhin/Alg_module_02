#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paisi = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        // cout << par << endl;
        if (par == des)
        {
            cout << level << endl;
            paisi = true;
        }
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if (paisi == false)
    {
        cout << -1 << endl;
    }
}