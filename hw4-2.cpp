#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b<=c || b+c<=a || a+c<=b){
        cout << "not" << ' ' << "a" << ' ' << "triangle";
    }
    else{
        if(a==b && b==c){
            cout << "regular" << ' ' << "triangle";
        }
        else if(a==b || b==c || a==c){
            if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
                cout <<"isosceles" << ' ' << "righttriangle";
            }
            else{
                cout <<"isosceles" << ' ' << "triangle";
            }
        }
        else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
            cout <<"rectangular" << ' ' << "triangle";
        }
        else if(a*a+b*b>c*c || b*b+c*c>a*a || a*a+c*c>b*b){
            cout <<"acute" << ' ' << "triangle";
        }
        else if(a*a+b*b<c*c || b*b+c*c<a*a || a*a+c*c<b*b){
            cout <<"obtuse" << ' ' << "triangle";
        }
    }    
    return 0;
}