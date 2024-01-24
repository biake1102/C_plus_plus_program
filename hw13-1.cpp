#include <iostream>
using namespace std;
//費式數列
int main(){ 
    int first = 0, second = 1, third = 0, n;
    cout << "number?" << endl;
    cin >> n;
    if(n == 1 || n == 2){
        cout << "1";
    }
    else{
        for(int i = 2; i < n + 1; i++){
        third = first + second;
        first = second;
        second = third;
    }
    cout << third;
    }
    
}