#include<iostream>
using namespace std;

int add(int x, int y){
    // 加法
    return x + y;
}
void print(int ans){
    // 印出答案
    cout << ans << endl;
}

int main(){
    int input1 = 0, input2 = 0;
    cin >> input1 >> input2;
    print(add(input1, input2));
    return 0;
}