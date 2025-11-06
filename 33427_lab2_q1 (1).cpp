#include<iostream>
#include<cmath>
using namespace std;
//take sum and product of two integers and see whetehr sum is divisible product
int main(){
 int num1, num2, sum, prod ; 
 bool isdiv;
 cout<<"enter two integers";
 cin>>num1>>num2;
 sum = num1 + num2;
 prod = num1 * num2;
 if (fmod(sum, prod)== 0)
 {
     isdiv = 1;
 } else {isdiv = 0;
     
 }
 if (isdiv == 1){
     cout<<"sum ="<<sum<<"product ="<<prod<<"is divisible";

 } else cout<<"sum ="<<sum<<"product ="<<prod<<"is not divisible";
 
 
}
