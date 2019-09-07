#include <iostream>
using namespace std;
int main() {
    int a[10][10];
    a[0][0]=1;
    for(int i=1;i<10;i++){
        a[i][0]=1;
        a[i][i]=1;
        for(int q=1;q<i;q++){
            a[i][q]=a[i-1][q]+a[i-1][q-1];
        }
    }
    for(int i=0;i<10;i++){
        for(int q=0;q<=i;q++){
            cout<<a[i][q]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
