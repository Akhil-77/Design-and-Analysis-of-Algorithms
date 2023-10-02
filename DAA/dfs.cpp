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

    int start = 0;
    int end = 5;
    vector<int> visited = {0, 0, 0, 0, 0, 0, 0};
    vector<int> path;
    stack<int> st;
    st.push(start);
    visited[start] = 1;
    while (!st.empty())
    {
        int cur = st.top();
        path.push_back(cur);
        if (cur == end)
            break;
        st.pop();
        for (int i = 0; i < 7; i++)
        {
            if (g[cur][i] == 1 && visited[i] == 0)
            {
                st.push(i);
                visited[i] = 1;
            }
        }
    }
    for (int i = 0; i < path.size() - 1; i++)
        cout << path[i] << "->";
    cout << path[path.size() - 1] << endl;
    return 0;
}