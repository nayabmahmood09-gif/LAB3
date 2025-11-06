#include<iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    srand(time(0));
    double a = (double) rand() / RAND_MAX;
    double b = (double) rand() / RAND_MAX;
    double c = (double) rand() / RAND_MAX;
    double d = (double) rand() / RAND_MAX;
    double e = (double) rand() / RAND_MAX;
    cout << a << " " << b << " " << c << " "<< d <<" "<< e <<  endl;
    double avg = (a + b + c +d + e) / 5;
    cout << "avg: " << avg << endl;
    cout << "min: " << min({a, b, c, d, e}) << endl;
    cout << "max: " << max({a, b, c, d, e}) << endl;
    return 0;
}