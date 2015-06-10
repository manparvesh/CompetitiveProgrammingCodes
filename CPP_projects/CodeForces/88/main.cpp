#include <bits/stdc++.h>
using namespace std;
const int maxn = 2345;
vector<int> Al[maxn];
int dist[maxn], color[maxn];

int BFS(int s){
    color[s] = 1;
    dist[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int src = q.front();
        for (int i=0; i<Al[src].size(); i++){
            int to = Al[src][i];
            if (!color[to]){
                color[to] = 1;
                dist[to] = dist[src] + 1;
                q.push(to);
            }
        }
        q.pop();
    }
    int ret = 0;
    for (int i=0; i<maxn; i++){
        if (dist[i]>ret){
            ret = dist[i];
        }
    }
    return ret;
}

int a[155][3];

int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    string s;
    for (int i=1; i<=n; i++){
        cin>>s;
        a[i][0]=200;
        a[i][1]=0;
        int ct=0;
        for(int j=0;j<s.length();j++){
            if(s[j]=='W'){
                ct++;
                a[i][0]=min(a[i][0],j);
                a[i][1]=max(a[i][1],j);
            }
        }
        a[i][2]=ct;
    }
    printf("%d\n",ans);
    return 0;
}
