#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int* f = new int[a+1];   //=int f[a+1]; (不同版本)
    f[0]=1;
    f[1]=1;
    for(int i=2;i<a+1;i++){
        f[i]=0;
    }
    for(int i=2;i<=a;i++){
        for(int j=0;j<i;j++){
            f[i]=f[i]+f[j]*f[i-1-j];
        }
    }
    cout << "f(" << a << ")=" << f[a];
    return 0;
}
