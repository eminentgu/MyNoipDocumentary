#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
int main(){
    int N,m,n,q;
    int dp[11][11][11][11];
    int mapp[11][11];
    cin>>N;
    memset(dp,0,sizeof(dp));
    while(cin>>m>>n>>q){
        if(m==0&&n==0&&q==0) break;
        mapp[m][n]=q;
        
    }
    for(int i=1;i<=N;i++){
        for(m=1;m<=N;m++){
            for(n=1;n<=N;n++){
                for(q=1;q<=N;q++){
                    if(i==n&&m==q) dp[i][m][n][q]=mapp[i][m]+max(max(dp[i-1][m][n-1][q],dp[i][m-1][n][q-1]),max(dp[i][m-1][n-1][q],dp[i-1][m][n][q-1]));
                    else dp[i][m][n][q]=mapp[i][m]+mapp[n][q]+max(max(dp[i-1][m][n-1][q],dp[i][m-1][n][q-1]),max(dp[i][m-1][n-1][q],dp[i-1][m][n][q-1]));
                }
            }
        }
    }
    cout<<dp[N][N][N][N];
    return 0;
}

