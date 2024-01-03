#include <iostream>
using namespace std;

int main(){
    int a = 5.6; 
    int b = static_cast<int>(5.6); //static_cast<...>(...) 轉型成<>中的型態
    
    //範例
    int grade1 = 0, grade2 = 0;
    cin >> grade1 >> grade2;
    cout << static_cast<float>(grade1+grade2)/2; //將grade1+grade2暫時轉成float
    
    return 0;
}