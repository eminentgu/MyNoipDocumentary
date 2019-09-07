#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int q=0;q<n;q++){
            cin>>a[i][q];
        }
    }
    for(int i=0;i<m;i++){
        for(int q=0;q<n;q++){
            cin>>b[i][q];
        }
    }
    for(int i=0;i<m;i++){
        for(int q=0;q<n;q++){
            cout<<a[i][q]+b[i][q]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
