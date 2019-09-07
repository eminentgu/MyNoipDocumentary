#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int key=0;
    int a[5][5];
    int b[5][5];
    for(int i=0;i<5;i++){
        for(int q=0;q<5;q++){
            cin>>a[i][q];
            b[i][q]=a[i][q];
        }
    }
    for(int i=0;i<5;i++){
        int max=a[i][0];
        key=0;
        for(int q=1;q<5;q++){
            if(max<a[i][q]){
                a[i][key]=0;
                key=q;
                max=a[i][q];
            }
            else{
                a[i][q]=0;
            }
            
        }
    }
    for(int i=0;i<5;i++){
        int min=b[0][i];
        key=0;
        for(int q=1;q<5;q++){
            if(min>b[q][i]){
                b[key][i]=0;
                key=q;
                min=b[q][i];
            }
            else{
                b[q][i]=0;
            }
            
        }
    }
    int flag=1;
    for(int i=0;i<5;i++){
        for(int q=0;q<5;q++){
            if((a[i][q]!=0)&&(b[i][q]!=0)){
                flag=0;
                cout<<i+1<<" "<<q+1<<" "<<a[i][q]<<endl;
            }
        }
    }
    if(flag){
        cout<<"没有";
    }
    return 0;
}

/**11 3 5 6 9
 12 4 7 8 10
 10 5 6 9 11
 8 6 4 7 2
 15 10 11 20 25
 **/
