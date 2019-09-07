#include<cstdio>
using namespace std;
long long ans;
int n;
int a[100005];
int c[100005];
void merge(int l,int r){
    int mid=(l+r)/2;
    if(l==r){
        return;
    }
    merge(l,mid);
    merge(mid+1,r);
    int i=l;
    int j=mid+1;
    int k=l;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=a[j++];
            ans+=mid-i+1;
        }
    }
    while(i<=mid){
        c[k++]=a[i++];
    }
    while(j<=r){
        c[k++]=a[j++];
    }
    for(int q=l;q<=r;q++){
        a[q]=c[q];
        }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    merge(1,n);
    printf("%lld\n",ans);
    return 0;
}
