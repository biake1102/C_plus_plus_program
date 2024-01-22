#include <iostream>
using namespace std;
//用array排列10個數字(由小到大)
int main(){
    float array[10] = {0};
    //int length = sizeof(array) / sizeof(array[0]); 算出array的長度
    //把輸入的值放進array
    for(int i = 0; i < 10; i++){
        cin >> array[i];
    }
    //泡沫排列
    for(int i = 0; i < 9; i++){
        if(array[i] > array[i+1]){
            swap(array[i], array[i+1]);
            i = -1;
        }
    }
    //輸出array的值
    for(int i = 0; i < 10; i++){
        cout << array[i] << " " ;
    }

    //二微陣列
    int score[10] [10];
    
}