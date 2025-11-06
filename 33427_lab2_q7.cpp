#include<iostream>
using namespace std;

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    double avg;

    cout << "Enter your marks for all the 5 subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;

    cout << "Based on your grades your average is = " << avg;

    if (avg >= 90) {
        cout << " Your grade based on this avg is A";
    } else if (avg >= 80) {
        cout << " Your grade based on this avg is B";
    } else if (avg >= 70) {
        cout << " Your grade based on this avg is C";
    } else {
        cout << " You have failed";
    }
}