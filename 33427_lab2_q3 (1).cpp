#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    if (marks <= 100 && marks >=90){
        cout<<"your grade is"<<"A";
    }else if (marks <= 89 && marks >=80){
        cout<<"your grade is"<<"B";
    }else if (marks <= 79 && marks >=70){
        cout<<"your grade is"<<"c";
    }else if (marks <= 69 && marks >=60){
        cout<<"your grade is"<<"d";
    }else {
        cout<<"your grade is F";
    }
    
}