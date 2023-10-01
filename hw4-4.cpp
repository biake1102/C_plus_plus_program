#include<iostream>
using namespace std;
//判段成績等級
int main(){
    int a;
    cin >> a;
    if(a<=100 && a>=90){
        cout << "A+";
    }
    if(a<90 && a>=80){
        cout << "A";
    }
    if(a<80 && a>=70){
        cout << "B";
    }
    if(a<70 && a>=60){
        cout << "C";
    }
    if(a<60 && a>=0){
        cout << "D";
    }
    return 0;
}