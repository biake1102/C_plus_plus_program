#include<iostream>
using namespace std;
//7進制轉10進制
int main(){
    int a,b,ans=0;
    cin >> a;
    b=a%10;
    a=a/10;
    ans=ans+1*b;
    b=a%10;
    a=a/10;
    ans=ans+7*b;
    b=a%10;
    a=a/10;
    ans=ans+7*7*b;
    b=a%10;
    a=a/10;
    ans=ans+7*7*7*b;
    b=a%10;
    a=a/10;
    ans=ans+7*7*7*7*b;
    cout << ans;
    return 0;
}