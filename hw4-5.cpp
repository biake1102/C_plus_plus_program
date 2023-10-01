#include<iostream>
using namespace std;
//N階乘
int main(){
    int N,a=1;
    cin >> N;
    if(N<=0){
        cout << a;
    }
    else{
        for(unsigned int i=1;i<=N;i++){
            a=a*i;
        }
        cout << a;
    }
    return 0;
}