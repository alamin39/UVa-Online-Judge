#include<bits/stdc++.h>
#define N 123123
#define M 5123
using namespace std;
int n, m;
vector < vector<pair<int, int>>>G(N);
vector<int>D(N, 1000000);
vector<int>D2(N, 1000000);
bool vis[N];
priority_queue<pair<int, int>>Q;

int f, s, t;
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &f, &s, &t);
        G[f].push_back(make_pair(s, t));
        G[s].push_back(make_pair(f, t));
    }
    D[1] = 0;
    Q.push(make_pair(-D[1], 1));
    while (!Q.empty())
    {
        int w = -Q.top().first;
        int a = Q.top().second;
        Q.pop();
        if (D2[a] < w)continue;
        for (int j = 0; j < G[a].size(); j++)
        {
            int node = G[a][j].first;
            int weight = G[a][j].second;
            int d = weight + w;
            if (d< D[node])
            {
                swap(d, D[node]);
                Q.push(make_pair(-D[node], node));
            }
            if (D2[node]>d)
            {
                D2[node] = d;
                Q.push(make_pair(-D2[node], node));
            }
        }
    }
    printf("%d", D2[n]);
    return 0;
}
