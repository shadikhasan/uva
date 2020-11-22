#include<bits/stdc++.h>

using namespace std;

char g[1000][1000];
void dfs(int x, int y, int m, int n)
{
    if(x < 0 || y < 0 || x == m || y == n)
        return;
    if(g[x][y] == '*')
        return;

    if(g[x][y] == '@')
        g[x][y] = '*';

    dfs(x, y + 1, m, n);
    dfs(x, y - 1, m, n);
    dfs(x + 1, y, m, n);
    dfs(x - 1, y, m, n);
    dfs(x + 1, y + 1, m, n);
    dfs(x + 1, y - 1, m, n);
    dfs(x - 1, y - 1, m, n);
    dfs(x - 1, y + 1, m, n);
}
int main()
{
    int n, m, i, j;
    while(1)
    {
        cin >> m >> n;
        if(m == 0 && n == 0)
            break;

        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                cin >> g[i][j];
            }
        }
        int c = 0; // c for oil deposits
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(g[i][j] == '@')
                {
                    c++;
                    dfs(i, j, m, n);
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
