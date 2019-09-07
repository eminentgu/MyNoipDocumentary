#include <iostream>
#include <cstring>
#include<string>//?
using namespace std;
int main(){
    int dp[2005][2005];
    int mapp[2010];
    int a;
    while(cin>>a){
        memset(dp,0,sizeof(dp));
        memset(mapp,0,sizeof(mapp));
        if(a==0) break;
        for(int i=1;i<=a;i++){
            cin>>mapp[i];
            mapp[a+i]=mapp[i];
        }
        for(int len=1;len<2*a;len++){
            for(int i=1;i+len<2*a;i++){
                int j=i+len;
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                if(mapp[i]==mapp[2*a-i]){
                    dp[i][j]=max(dp[i][j],dp[i+1][j-1]+2);
                }
                for(int k=i;k<=j;k++){
                    dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=2*a;i++){
            ans=max(ans,dp[1][i]+dp[i+1][2*a]);
        }
        cout<<ans;
    }
    return 0;
}
