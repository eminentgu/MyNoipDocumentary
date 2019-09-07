#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100005]={0};
int m,n;
int search(int k){
    int l=1,r=m;
    while(l<=r){
        int mid=(l+r)/2;
        if(k>a[mid]) l=mid+1;
        else r=mid-1;
    }
    if(abs(a[l]-k)<=abs(a[l-1]-k)){
        return abs(a[l]-k);
    }
    else{
        return abs(a[l-1]-k);
    }
}
int main(){
    int ans=0;
    int temp;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    sort(a+1,a+m+1);
    for(int i=1;i<=n;i++){
        cin>>temp;
        if(temp<a[1]) ans+=a[1]-temp;
        else if (temp>a[m]) ans+=temp-a[m];
        else ans+=search(temp);
    }
    cout<<ans;
    return 0;
}

//当temp不再数组里的时候，注意特判，此时二分不好用。
/**
 4 3
 513 598 567 689
 500 600 550
 **/
