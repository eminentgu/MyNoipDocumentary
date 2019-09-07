#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    char b[n+1];
    int temp;
    char tempstr;
    for(int i=1;i<=n;i++){
        cin>>b[i]>>a[i];
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                tempstr=b[j];
                b[j]=b[j+1];
                b[j+1]=tempstr;
            }
            if(a[j]==a[j+1]){
                if(b[j+1]<b[j]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    tempstr=b[j];
                    b[j]=b[j+1];
                    b[j+1]=tempstr;
                }
        }
    }
    }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" "<<a[i]<<endl;
    }
    return 0;
}
