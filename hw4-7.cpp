#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string a;
    int ans=0;
    cin >> a;
    for(int i=4;i>=0;i--){
        switch (a[i]){
            case '0':
            ans=ans+0*pow(16,(4-i));
            break;
            case '1':
            ans=ans+1*pow(16,(4-i));
            break;
            case '2':
            ans=ans+2*pow(16,(4-i));
            break;
            case '3':
            ans=ans+3*pow(16,(4-i));
            break;
            case '4':
            ans=ans+4*pow(16,(4-i));
            break;
            case '5':
            ans=ans+5*pow(16,(4-i));
            break;
            case '6':
            ans=ans+6*pow(16,(4-i));
            break;
            case '7':
            ans=ans+7*pow(16,(4-i));
            break;
            case '8':
            ans=ans+8*pow(16,(4-i));
            break;
            case '9':
            ans=ans+9*pow(16,(4-i));
            break;
            case 'A':
            ans=ans+10*pow(16,(4-i));
            break;
            case 'a':
            ans=ans+10*pow(16,(4-i));
            break;
            case 'B':
            ans=ans+11*pow(16,(4-i));
            break;
            case 'b':
            ans=ans+11*pow(16,(4-i));
            break;
            case 'C':
            ans=ans+12*pow(16,(4-i));
            break;
            case 'c':
            ans=ans+12*pow(16,(4-i));
            break;
            case 'D':
            ans=ans+13*pow(16,(4-i));
            break;
            case 'd':
            ans=ans+13*pow(16,(4-i));
            break;
            case 'E':
            ans=ans+14*pow(16,(4-i));
            break;
            case 'e':
            ans=ans+14*pow(16,(4-i));
            break;
            case 'F':
            ans=ans+15*pow(16,(4-i));
            break;
            case 'f':
            ans=ans+15*pow(16,(4-i));
            break;           
        }
       
    }
    cout << ans;
    return 0;
}