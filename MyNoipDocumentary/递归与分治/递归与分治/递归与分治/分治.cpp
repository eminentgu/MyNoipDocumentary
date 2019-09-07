求 $a^n$ 有什么做法?

$$n \leq 10^{18}$$

提示：$a^n= a^{n/2} * a^{n/2}$

```cpp
int fpow(int a,int n){
    int ans=1;
    if(n==0)return 1;
    if(n==1)return a;
    if(n%2==0){ans=fpow(a,n/2);ans*=ans;}
    else{n--;ans=fpow(a,n/2);ans*=ans;ans*=a;}
    return ans;
}
```
