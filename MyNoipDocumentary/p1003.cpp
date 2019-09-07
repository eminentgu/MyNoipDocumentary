#include<iostream>
using namespace std;
int main(){
    int n;
    int t_x,t_y;
    int flag=1;
    cin>>n;
    int tempx[n+1],tempy[n+1],tempxa[n+1],tempya[n+1];
    for(int i=1;i<=n;i++){
        cin>>tempx[i]>>tempy[i]>>tempxa[i]>>tempya[i];
    }
    cin>>t_x>>t_y;
    for(int i=n;i>=1;i--){
        if((tempx[i]<=t_x)&&(t_x<=tempx[i]+tempxa[i])){
            if((tempy[i]<=t_y)&&(t_y<=tempy[i]+tempya[i])){
                cout<<i;
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        cout<<-1;
    }
    return 0;
    
}
