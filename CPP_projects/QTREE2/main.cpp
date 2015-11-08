#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

typedef long long ll;
int n;
vector<pair<int,ll> > nb[100001];
int parent[100001][24];
int depth[100001];
ll weight[100001];

void cl() {
    for (int i = 1; i <=n; ++i) {
        nb[i].clear();
        weight[i] = 0;
        depth[i] = 0;
    }
}

void dfs(int u, int p) {
    parent[u][0] = p;
    depth[u] = depth[p]+1;
    for(size_t i = 0; i < nb[u].size(); ++i) {
        int v = nb[u][i].first;
        ll w = nb[u][i].second;
        if (v != p) {
            weight[v] = weight[u] + w;
            dfs(v, u);
        }
    }
}

void pre() {
    for (int i = 1; (1<<i) <= n; ++i) {
        for (int j = 1; j<=n; ++j) {
            parent[j][i] = parent[parent[j][i-1]][i-1];
        }
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u,v);
    int LOG = 23;
    while(depth[u] != depth[v]) {
        if (depth[u]-(1<<LOG) >= depth[v]) {
            u = parent[u][LOG];
        }
        --LOG;
        if (LOG < 0) LOG = 0;
    }
    LOG = 23;
    while(u != v) {
        if (parent[u][LOG] != parent[v][LOG] || LOG == 0) {
            u = parent[u][LOG];
            v = parent[v][LOG];
        }
        --LOG;
        if (LOG < 0) LOG = 0;
    }
    return u;
}

int kth(int u, int v, int k) {
    int w = lca(u,v);
    int d1 = depth[u]-depth[w]+1;
    int d2 = depth[v]-depth[w]+1;
    int from;
    if (d1 < k) {
        from = v;
        k = d2+d1-k-1;
    } else if(k == d1) {
        return w;
    } else if (d1 > k) {
        from = u;
        k-=1;
    }
    int LOG = 23;
    while (k != 0) {
        if (1<<LOG <= k) {
            from = parent[from][LOG];
            k-= (1<<LOG);
        }
        --LOG;
        if (LOG < 0) LOG = 0;
    }
    return from;
}

ll dist(int u, int v) {
    int w = lca(u,v);
    return weight[u]+weight[v] - 2LL*weight[w];
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        for(int i = 1; i<n; ++i) {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            nb[a].push_back(make_pair(b,c));
            nb[b].push_back(make_pair(a,c));
        }
        dfs(1, 0);
        pre();
        char opr[10];
        while(1) {
            scanf("%s", opr);
            if (opr[0] == 'D' && opr[1] == 'O') {
                break;
            } else if (opr[0] == 'K') {
                int u,v,k;
                scanf("%d%d%d",&u,&v,&k);
                printf("%d\n", kth(u,v,k));
            } else if(opr[0] == 'D' && opr[1] == 'I') {
                int u,v;
                scanf("%d%d",&u,&v);
                printf("%lld\n", dist(u,v));
            }
        }
        cl();
    }
    return 0;
}
