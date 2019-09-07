#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
void qsort(int a[],int start,int end){
    int i=start;
    int j=end;
    int flag=a[(start+end)/2];
    do{
        while(a[i]<flag){i++;}
        while(a[j]>flag){j--;}
        if(i<=j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }while(i<=j);
    if(i<end){qsort(a,i,end);}
    if(j>start){qsort(a,start,j);}
    
}
int main(){
    int a[100000];
    int N;
    scanf("%d",&N);
    for(int m=0;m<N;m++){
        scanf("%d",&a[m]);
    }
    qsort(a,0,N-1);
    for(int m=0;m<N;m++){
        printf("%d ",a[m]);
    }
    return 0;
}
