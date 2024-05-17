#include <iostream>
using namespace std;
// 何內塔(遞迴)
void hanoi(char from, char temp, char to, int disc){ //(起始點,暫存,終點,盤子數)
    if(disc == 1){
        cout << "From " << from << " to " << to << "\n";
    }
    else{
        hanoi(from, to, temp, disc - 1);
        cout << "From " << from << " to " << to << "\n";
        hanoi(temp, from, to, disc - 1);
    }
}
int main(){
    int disc = 0;
    cin >> disc;
    char a = 'A', b = 'B', c = 'C';
    
    hanoi(a, b, c, disc);

    return 0;
}