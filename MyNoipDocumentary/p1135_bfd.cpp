#include <iostream>
#include <queue>
#include<cstring>
using namespace std;
int main(){
    int n,a,b;
    int mapp[205];
    int vis[205];
    queue<int>q;
    memset(mapp,-1,sizeof(mapp));
    memset(vis,-1,sizeof(vis));
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>mapp[i];
    }
    vis[a]=0;
    q.push(a);
    while(!q.empty()){
        int x=q.front(); q.pop();
        int x1=mapp[x]+x;
        int x2=x-mapp[x];
        if(x1>=0&&x1<=n&&vis[x1]==-1){
            q.push(x1);
            vis[x1]=vis[x]+1;
        }
        if(x2>=0&&x2<=n&&vis[x2]==-1){
            q.push(x2);
            vis[x2]=vis[x]+1;
        }
        if(x1==b||x2==b) break;
    }
    cout<<vis[b];
    return 0;
}
