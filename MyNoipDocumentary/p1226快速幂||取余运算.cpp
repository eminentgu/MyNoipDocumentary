#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long temp_b=b;
    long long temp_a=a;
    long long ans=1;
    while(b>0){
        if(b%2!=0) ans=a*ans%c;
        a=a*a%c;
        b/=2;
    }
    if(temp_b==0) cout<<temp_a<<"^"<<temp_b<<" mod "<<c<<"="<<0;
    else cout<<temp_a<<"^"<<temp_b<<" mod "<<c<<"="<<ans;
    return 0;
}
