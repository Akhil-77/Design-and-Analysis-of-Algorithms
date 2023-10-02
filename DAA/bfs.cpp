#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> g = {{0, 1, 1, 1, 0, 0, 0},
                             {1, 0, 0, 0, 0, 1, 0},
                             {1, 0, 0, 1, 1, 0, 0},
                             {1, 0, 1, 0, 1, 0, 0},
                             {0, 0, 1, 1, 0, 1, 0},
                             {0, 1, 0, 0, 1, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0}};

    queue<int> q;
    int start = 0;
    int end = 5;
    vector<int> visited = {0, 0, 0, 0, 0, 0, 0};
    visited[start] = 1;
    q.push(start);
    unordered_map<int, int> parent;
    for (int i = 0; i < 7; i++)
    {
        parent[i] = -1;
    }
    parent[start] = -1;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < 7; i++)
        {
            if (g[cur][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
                parent[i] = cur;
            }
        }
    }

    vector<int> path;
    int par = end;
    while (par != -1)
    {
        path.push_back(par);
        par = parent[par];
    }
    if (path.size() == 1)
    {
        cout << "Path not found" << endl;
        return 0;
    }
    for (int i = path.size() - 1; i >= 1; i--)
        cout << path[i] << "->";
    cout << path[0] << endl;
    return 0;
}