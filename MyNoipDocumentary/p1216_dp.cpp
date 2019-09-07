#include <iostream>
#include<cstdio>
using namespace std;
int a[1005][1005];
int ans[1005][1005];
int main(){
    int maxx=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int q=0;q<=i;q++){
            cin>>a[i][q];
        }
    }
    ans[0][0]=a[0][0];
    for(int i=1;i<n;i++){
        ans[i][0]=ans[i-1][0]+a[i][0];
        for(int q=0;q<=i;q++){
            ans[i][q]=max(ans[i-1][q],ans[i-1][q-1])+a[i][q];
        }
    }
    for(int i=0;i<n;i++){
        maxx=max(ans[n-1][i],maxx);
    }
    cout<<maxx;
    return 0;
}
