#include <iostream>
#include <cstdio>
using namespace std;

void move (int n, char from, char buffer, char to){
    if (n == 1) {
        cout << "Move " << n << " from " << from << " to " << to << endl;
    }
    else {
        move (n-1, from, to, buffer);
        cout << "Move " << n << " from " << from << " to " << to << endl;
        move (n-1, buffer, from, to);
        
    }
}
int main(){
    int n;
    cin>>n;
    move(n,'a','b','c');
    return 0;
}
