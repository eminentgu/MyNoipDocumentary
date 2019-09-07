#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct student
{
    int id;
    char name[20];
    int mark[3];
    int sum=0;
} ;
student STU[3];

int main(){
    for(int i=0;i<=2;i++){
        cin>>STU[i].id;
        scanf("%s",STU[i].name);
        for(int q=0;q<=2;q++){
            cin>>STU[i].mark[q];
            STU[i].sum+=STU[i].mark[q];
        }
    }
    for(int i=0;i<2;i++){
        for(int q=0;q<2;q++){
            if(STU[q].sum>STU[q+1].sum){
                student temp=STU[q];
                STU[q]=STU[q+1];
                STU[q+1]=temp;
            }
        }
    }
    for(int i=0;i<=2;i++){
        cout<<"学号："<<STU[i].id<<"\n姓名：";
        puts(STU[i].name);
        cout<<"三门成绩："<<STU[i].mark[0]<<" "<<STU[i].mark[1]<<" "<<STU[i].mark[2]<<" "<<endl;
    }
    return 0;
}
/**
1001 kn 97 98 99
1002 yunan 45 48 49
1003 guanyin 75 78 80
**/
