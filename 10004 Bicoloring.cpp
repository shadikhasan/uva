#include <bits/stdc++.h>
using namespace std;
#define WHITE -1
#define BLUE 1
#define RED 2
vector<int> adj[209];
int col[209];
int bfs(int s)
{
    memset(col,-1,sizeof col);

    queue <int> q;
    q.push(s);
    col[s] = BLUE;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];

            if(col[v] == WHITE)
            {
                if(col[u] == BLUE) col[v] = RED;
                else if(col[u] == RED) col[v] = BLUE;

                q.push(v);
            }
            else
            {
                if(col[u] == col[v]) return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int node, edge, x, y;
    while(1)
    {
        scanf("%d", &node);
        if(node == 0)break;
        scanf("%d", &edge);
        for(int i = 0; i < edge; i++)
        {
            scanf("%d %d", &x, &y);

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        if(bfs(0)) printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

        for(int i = 0; i < node; i++)
        {
            adj[i].clear();
        }
    }
    return 0;
}
