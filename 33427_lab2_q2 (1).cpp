#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"enter x and y coordinates in the same sequence";
    cin>>x>>y;
    
    if (x > 0){
        if(y>0){
            cout<<"Quadrant I";
        }
    } else if (x> 0 && y<0){
        cout<<"Quadrant IV";
    }else if(x<0 && y<0){
        cout<<"Quadrant III";
    } else if (x == 0 && y == 0){
        cout<<"you are at origin";
    }
    else {
        cout<<"Quadrant II";
    }
        
    }
