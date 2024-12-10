// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// int dis[1001][1001];
// bool visited[1001][1001];
// pair<int, int> d[8] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

// bool is_valid(int x, int y)
// {
//     return x >= 0 && y >= 0 && x < n && y < m && !visited[x][y];
// }

// void bfs(int x, int y)
// {
//     queue<pair<int, int>> q;
//     q.push({x, y});
//     visited[x][y] = true;
//     dis[x][y] = 0;

//     while (!q.empty())
//     {
//         int x1 = q.front().first;
//         int y1 = q.front().second;
//         q.pop();

//         for (int i = 0; i < 8; i++)
//         {
//             int x2 = x1 + d[i].first;
//             int y2 = y1 + d[i].second;

//             if (is_valid(x2, y2))
//             {
//                 q.push({x2, y2});
//                 visited[x2][y2] = true;
//                 dis[x2][y2] = dis[x1][y1] + 1;
//             }
//         }
//     }
// }

// int main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         memset(visited, false, sizeof(visited));
//         memset(dis, -1, sizeof(dis));

//         cin >> n >> m;
//         int mat[n][m];
//         int x, y, x1, y1;
//         cin >> x >> y >> x1 >> y1;
//         bfs(x, y);
//         cout << dis[x1][y1] << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int n, m;
pair<int, int> d[8] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m;
}
pair<int, int> parent[10001][10001];
bool visited[10000][10001];

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    visited[x][y] = true;

    while (!q.empty())
    {
        auto pa = q.front();
        q.pop();
        int x1 = pa.first;
        int y1 = pa.second;

        for (int i = 0; i < 8; i++)
        {
            int x2 = x1 + d[i].first;
            int y2 = y1 + d[i].second;

            if (isValid(x2, y2) && !visited[x2][y2])
            {
                q.push({x2, y2});
                visited[x2][y2] = true;
                parent[x2][y2] = {x1, y1};
                //cout << x2 << " " << y2 << "\t" << parent[x2][y2].first << " " << parent[x2][y2].second <<"\t"<< x1 << " " << y1 << endl;
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        memset(visited, false, sizeof(visited));
        memset(parent, -1, sizeof(parent));

        cin >> n >> m;
        int mat[n][m];
        int x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;
        if(x == x1 && y == y1){
            cout<<"0\n";
            continue;
        }
        bfs(x, y);

        if (visited[x1][y1])
        {
            int x3 = x1, y3 = y1;
            int i = 1;
            while (1)
            {
                if (parent[x3][y3].first == x && parent[x3][y3].second == y) break;
                i++;
                auto u = parent[x3][y3];
                x3 = u.first;
                y3 = u.second;
                // cout << x3 << y3 << endl;
            }
            cout << i << endl;
        }
        else cout << -1 << endl;
    }

    cout << endl;
    return 0;
}
