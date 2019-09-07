#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3][5];
    int b[5][3];
    for(int i=0;i<3;i++){
        for(int q=0;q<5;q++){
            cin>>a[i][q];
        }
    }
    if(n%2==1){
        for(int i=2;i>=0;i--){
            for(int q=0;q<5;q++){
                b[q][2-i]=a[i][q];
            }
        }
        
        
    }
    else{
        for(int i=2;i>=0;i--){
            for(int q=4;q>=0;q--){
                b[4-q][i]=a[i][q];
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int q=0;q<3;q++){
            cout<<b[i][q]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
