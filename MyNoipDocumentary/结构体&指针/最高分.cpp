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
    int sum;
    int max=0;
    for(int i=0;i<=2;i++){
        cin>>STU[i].id;
        scanf("%s",STU[i].name);
        for(int q=0;q<=2;q++){
            cin>>STU[i].mark[q];
            STU[i].sum+=STU[i].mark[q];
        }
    }
    sum=STU[0].sum;
    for(int i=1;i<=2;i++){
        if(sum<STU[i].sum){
        sum=STU[i].sum;
            max=i;
        }
    }
    cout<<"学号："<<STU[max].id<<"\n姓名：";
    puts(STU[max].name);
    cout<<"三门成绩："<<STU[max].mark[0]<<" "<<STU[max].mark[1]<<" "<<STU[max].mark[2]<<" "<<endl;
    int temp=STU[max].sum;
    printf("平均分：%.1f\n",temp*1.0/3);
    return 0;
}
/**
1001 kn 97 98 99
1002 yunan 45 48 49
1003 guanyin 75 78 80
**/
