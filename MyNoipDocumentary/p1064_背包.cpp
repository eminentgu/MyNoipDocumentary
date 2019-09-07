#include <cstdio>
#include<iostream>
#include <cstring>
using namespace std;
int main(){
    int N,m;
    int u[65];
    int p[65];
    int q[65];
    int q1[65];
    int q2[65];
    int money[35000];
    memset(q,0,sizeof(q));
    memset(q1,0,sizeof(q1));
    memset(q2,0,sizeof(q2));
    memset(money,0,sizeof(money));
    memset(p,0,sizeof(p));
    cin>>N>>m;
    for(int i=1;i<=m;i++){
        cin>>u[i]>>p[i]>>q[i];
        if(q[i]!=0){
            if(q1[q[i]]==0) q1[q[i]]=i;
            else if(q2[q[i]]==0) q2[q[i]]=i;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=N;j>=u[i];j--){
            if(q[i]==0){
                money[j]=max(money[j],money[j-u[i]]+u[i]*p[i]);
                if(q1[i]!=0){
                    if(j-u[i]-u[q1[i]]>=0)  money[j]=max(money[j],money[j-u[i]-u[q1[i]]]+u[i]*p[i]+u[q1[i]]*p[q1[i]]);
                }
                if(q2[i]!=0){
                    if(j-u[q2[i]]-u[i]>=0)  money[j]=max(money[j],money[j-u[i]-u[q2[i]]]+u[i]*p[i]+u[q2[i]]*p[q2[i]]);
                    if(j-u[q2[i]]-u[i]-u[q1[i]]>=0) { money[j]=max(money[j],money[j-u[i]-u[q2[i]]-u[q1[i]]]+u[i]*p[i]+u[q2[i]]*p[q2[i]]+u[q1[i]]*p[q1[i]]);
                    }
                }
            }
        }
    }
    cout<<money[N];
    return 0;
}
