#include<cstdio>
#include <iostream>
using namespace std;
int vis[1010],n,a[1010];
void dfs(int cur){//当前填到了第cur位
    if(cur==n+1){for(int i=1;i<=n;i++)printf("%d ",a[i]);printf("\n");return;}
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        vis[i]=1;a[cur]=i;
        dfs(cur+1);
        vis[i]=0;
    }
}
int main(){
    scanf("%d",&n);
    dfs(1);
}

