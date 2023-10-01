#include<iostream>
using namespace std;
//整數的四則運算
int main(){
    int a,b;
    char c;
    cin >> a >> c >> b;
    if(c==43){
        cout << a+b;
    }
    if(c==45){
        cout << a-b;
    }
    if(c==42){
        cout << a*b;
    }
    if(c==47){
        cout << a/b;
    }
    return 0;
}