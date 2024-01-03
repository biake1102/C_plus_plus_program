#include <iostream>
using namespace std;

int main(){
    /*switch(operation){
        case 'value 1':
            statements
            break;
        case 'value 2':
            statements
            break;
        ...
        //default:
            statements
            break;
    }*/
    //輸入西元年和月份，輸出該月天數
    char month;
    int year=0;
    cout << "Please input year:";
    cin >> year;
    cout << "Please input month:";
    cin >> month;
    switch (month)
    {
    case '1':
        cout << "31 days";
        break;
    case '2':
        if(y%400==0 || y%4==0 && y%100!=0){
            cout <<"29 days";
        }
        else{
            cout <<"28 days";
        }
        break;
    case '3':
        cout << "31 days";
        break;
    case '4':
        cout << "30 days";
        break;
    case '5':
        cout << "31 days";
        break;
    case '6':
        cout << "30 days";
        break;
    case '7':
        cout << "31 days";
        break;
    case '8':
        cout << "31 days";
        break;
    case '9':
        cout << "30 days";
        break;
    case '10':
        cout << "31 days";
        break;
    case '11':
        cout << "30 days";
        break;
    case '12':
        cout << "31 days";
        break;
    default:
        cout << "month is wrong";
        break;
    }
}