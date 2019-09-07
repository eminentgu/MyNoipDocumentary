#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> G[N];
void addedge(int u,int v){
    G[u].push_back(v);
    G[v].push_back(u);
}
int n,dis[N],d,ans;
void dfs(int u,int f){
    if(dis[u]>d)ans++;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(v==f)continue;
        dis[v]=dis[u]+1;
        dfs(v,u);
    }
}
int main(){
    scanf("%d%d",&n,&d);
    for(int i=1;i<n;i++){
        int u,v;scanf("%d%d",&u,&v);
        addedge(u,v);
    }
    dfs(1,0);
    printf("%d\n",ans);
}
