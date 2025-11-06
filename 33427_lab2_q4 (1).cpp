#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, y, z, sqx, sqy, sqz, total;
    double d;
    cout<<"please enter x, y, z in same sequence";
    cin>>x>>y>>z;
    sqx = x * x;
    sqy = y * y;
    sqz = z * z;
    total = sqx + sqz + sqy;
    d = sqrt(total);
    cout<<d;



}