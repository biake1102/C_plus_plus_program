#include <iostream>
using namespace std;
//費式數列
int main(){ 
    int first = 0, second = 1, third, n;
    cout << "number?";
    cin >> n;
    for(int i = 2; i < n; i++){
        third = first + second;
        first = second;
        second = third;
    }
    cout << third;
}