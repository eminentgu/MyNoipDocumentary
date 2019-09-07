#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a[105];
    int n;
    int count=0;
    cout<<",,\n";
    cin>>n;
    cout<<",,\n";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<",,\n";
    for(int i=1;i<=n;i++){
        for(int q=i+1;q<=n;q++){
            if(a[q]<a[i]){
                count++;
            }
        }
    }
    cout<<count;
    cout<<",,";
    return 0;
}
