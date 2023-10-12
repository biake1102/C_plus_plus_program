#include<iostream>
using namespace std;
//判斷質數
bool prime(int num) {
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
}
int main() {
    int n = 0;
    cin >> n;
    if (prime(n)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}