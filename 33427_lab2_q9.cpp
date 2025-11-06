#include<iostream>
using namespace std;
int main(){
double bal=9000000, depmoney, wdrwmoney;
int func ;
cout<<"what is your balance?";
cin>> bal;
cout<<"enter 1 to deposit money, 2 to withdraw money and 3 to check balance";
cin>> func;
if (func == 1){
    cout<<"enter the amount you want to deposit";
    cin>> depmoney;
    bal = bal + depmoney;
    } else if(func == 2){
        cout<<"enter the amount you want to withdraw";
        cin>>wdrwmoney;
        if ( wdrwmoney <= bal ){
            cout<<"here is your money";
            bal = bal - wdrwmoney;
        }else {
            cout<<"you do not have sufficient balance";
        }
    }else if(func == 3) {
        cout<<"your balance is"<<bal;
    } else {
        cout<<"enter a valid number";
    }
}