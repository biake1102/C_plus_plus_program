#include <iostream>

using namespace std;
//泡沫排列
int main(){
    int amount;
    cout << "number of amounts" << endl;
    cin >> amount;
    cout << "input" << endl;
    int* input = new int[amount];
    for(int i = 0;i < amount;i++){
        cin >> input[i];
    }
    for(int i = 0;i < (amount-1);i++){
        if(input[i] > input[i+1]){
            swap (input[i],input[i+1]);
            i = -1;
        }
    }
    for(int i = 0;i < amount;i++){
        cout << input[i] << " ";
    }
}