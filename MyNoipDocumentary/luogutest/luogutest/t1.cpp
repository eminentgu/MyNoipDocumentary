#include <iostream>
#include <cmath>
using namespace std;
int a[20];
int paixu(int a[]){
    for(int i=0;i<20;i++){
        for(int q=0;q<20;q++){
            if(a[q]>a[q+1]){
                int foo=a[q];
                a[q]=a[q+1];
                a[q+1]=foo;
            }
        }
    }
    return a[0];
}
int main(int argc, const char * argv[]) {
    int force;
    int lv,score;
    int vforce=0;
    int x=0;
    int n;
    int min=526;
    char caozuo;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>caozuo;
        if(caozuo=='P'){
            cin>>lv>>score;
            force=floor(score/1e7*(1+lv)*25);
            x++;
            if(x<=20){
                vforce+=force;
                a[x-1]=force;
                if(min>=force){
                    min=force;
                }
            }
            else{
                if(min<force){
                    vforce-=min;
                    min=paixu(a);
                    vforce+=min;
                    a[0]=force;
                }
            }
        }
        else{
            printf("%d\n",vforce);
        }
    }
    return 0;
}
