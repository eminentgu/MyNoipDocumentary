// luogu-judgrer-enable-o2
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    int min;
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    min=a[9]+a[0]+a[1];
    for(int i=0;i<9;i++){
        if(min>(a[i]+a[i+1]+a[i+2])){
            min=a[i]+a[i+1]+a[i+2];
        }
    }
    if(min>(a[9]+a[0]+a[1])){
        min=a[9]+a[0]+a[1];
        
    }
    cout<<min;
    return 0;
}
