#include <iostream>
using namespace std;
int a[1005];
int m,n,sum;
bool dfs(int tot,int l1,int l2,int l3,int l4){
    if(l1>sum||l2>sum||l3>sum||l4>sum||tot>n) return false;
    if(tot==n&&l1==sum&&l2==sum&&l3==sum&&l4==sum) return true;
    if(dfs(tot+1,l1+a[tot],l2,l3,l4)) return true;
    if(dfs(tot+1,l1,l2+a[tot],l3,l4)) return true;
    if(dfs(tot+1,l1,l2,l3+a[tot],l4)) return true;
    if(dfs(tot+1,l1,l2,l3,l4+a[tot])) return true;
    return false;
        }
int main(){
    cin>>m;
    while(m--){
        sum=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%4){
            cout<<"no\n";
        }else{
            sum/=4;
            if(dfs(0,0,0,0,0)) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}
