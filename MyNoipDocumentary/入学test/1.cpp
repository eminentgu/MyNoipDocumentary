#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int a[100005]={0};
    int b[100005]={0};
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=i;
    }
    for(int i=1;i<n-1;i++){
        if(int q=1;q<n-1;q++){
            if(a[i]>a[i+1]){
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                temp=b[i+1];
                b[i+1]=b[i];
                b[i]=temp;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if
    }
    cout<<count;
    return 0;
}
//6
//2 6 3 4 5 1
