#include <bits/stdc++.h>
#define N 50 + 5
#define inf INT_MAX
using namespace std;

char s[N][N];
int visited[N][N] = {0};
int direction[4][2] = {1, 0, -1, 0, 0, 1, 0, -1}; // right up left down

struct node
{
    int x;
    int y;
};
int n;
void dfs(int x, int y, int val)
{
    visited[x][y] = val;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + direction[i][0];
        int ny = y + direction[i][1];
        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;
        if (visited[nx][ny] == 0 && s[nx][ny] == '0')
        {
            dfs(nx, ny, val);
        }
    }
}

int main()
{
    cin >> n;

    node start, end;
    cin >> start.x >> start.y >> end.x >> end.y;

    // memset(visited, 0, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    dfs(start.x - 1, start.y - 1, 1);
    if (visited[end.x - 1][end.y - 1] == 1)
    {
        cout << "0" << endl;
        return 0;
    }

    dfs(end.x - 1, end.y - 1, -1);

    int ans = inf;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (visited[i][j] == 1 && s[i][j] == '0')
            {
                for (int a = 0; a < n; a++)
                    for (int b = 0; b < n; b++)
                    {
                        if (visited[a][b] == -1 && s[a][b] == '0')
                            ans = min(ans, (a - i) * (a - i) + (b - j) * (b - j));
                    }
            }
        }
    cout << ans << endl;
    return 0;
}