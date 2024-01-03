#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a = 0, b = 0, c = 0, min = 0;
    cin >> a >> b >> c;
    if(a <= b){
        (a <= c) ? (min = a) : (min = c);//判斷式 ? 成立時執行 : 不成立時執行
    }
    else{
        min = (b <= c ? b : c);//if b<=c min=b,else min=c
    }
    cout << min;
    return 0;
}