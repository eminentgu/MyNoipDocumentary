#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
long long a[100005];
int ans;
int A,B;
int check(long long x){
    ans=1;
    long long last=a[0];
    for(int i=1;i<A;i++){
        if(a[i]-last>=x) {
            ans++;
            last=a[i];
    }
    }
    if(ans>=B) return 1;
    else return 0;
}
int main(){
    cin>>A>>B;
    for(int i=0;i<A;i++){
        cin>>a[i];
    }
    sort(a,a+A);
    long long mid;
    long long l=0;
    long long r=a[A-1];
    while(l<=r){
        mid=(l+r)/2;
        if(check(mid)) l=mid+1;
        else r=mid-1;
    }
    
    if(check(l)) cout<<l;
    else cout<<r;
    return 0;
}
