#include <iostream>
using namespace std;
//計算閏年
int main(){
	int a;
	cin >> a;
	if((a % 4 == 0 && a % 100 != 0)||(a % 400 == 0)){
		cout << "Yes";
	}
	else{
		cout << "No";
	} 
}