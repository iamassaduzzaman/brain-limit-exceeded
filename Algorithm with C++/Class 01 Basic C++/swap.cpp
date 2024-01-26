#include <iostream>
using namespace std;

int main(){

    int x = 15, y = 35;

    // before swap
    cout << "Before swap" << '\n';
    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';

    // swap build in function
    swap(x, y);

    // after swap
    cout << "After swap" << '\n';
    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n';
    return 0;
}