#include<iostream>
using namespace std;
/*數列卷積
    已知 f(0)=1 且 f(n)=f(0)*f(n-1)+f(1)*f(n-2)+f(2)*f(n-3)+f(3)*f(n-4)+...+f(n-1)*f(0)。 
    f(0)=1 
    f(1)=f(0)*f(0)=1 
    f(2)=f(0)*f(1)+f(1)*f(0)=2 
    f(3)=f(0)*f(2)+f(1)*f(1)+f(2)*f(0)=5 
    f(4)=f(0)*f(3)+f(1)*f(2)+f(2)*f(1)+f(3)*f(0)=14 
    f(5)=f(0)*f(4)+f(1)*f(3)+f(2)*f(2)+f(3)*f(1)+f(4)*f(0)=42 
    輸入一正整數 n ， 輸出 f(n) */
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
