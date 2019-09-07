#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int v;
    int n;
    cin>>v;
    cin>>n;
    int left=v;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        for(int q=1;q<n;q++){
            if(a[q]>a[q+1]){
                int temp=a[q];
                a[q]=a[q+1];
                a[q+1]=temp;
            }
        }
    }
    for(int i=n;i>=1&&left!=0;i--){
        if(left>=a[i]){
            left=left-a[i];
        }
        if(left==0){
            break;
        }
    }
    cout<<left;
    return 0;
}

//6
//2 6 3 4 5 1
