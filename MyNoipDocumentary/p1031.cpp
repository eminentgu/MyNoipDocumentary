#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int a[10010];
    int n,average=0,ans=0,temp=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        average+=a[i];
    }
    average/=n;
    for(int i=0;i<n-1;i++){
        temp=a[i]-average;
        a[i+1]=a[i+1]+temp;
        if(temp) ans++;
    }
    cout<<ans;
    return 0;
}
