#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[105];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int b[105]={0};
    b[0]=a[0];
    int temp=1;
    for(int i=1;i<n;i++){
        if(b[temp-1]!=a[i]){
            b[temp]=a[i];
            temp++;
        }
    }
    cout<<temp<<endl;
    for(int i=0;i<temp;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
