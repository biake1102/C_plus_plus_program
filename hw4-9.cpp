#include<iostream>
#include<string>
using namespace std;
//英文小寫轉大寫
int main(){
    string a;
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i]>=97 && a[i]<=122){
            a[i]=a[i]-32;
        }
    }
    cout << a;
    return 0;
}