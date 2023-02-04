#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    switch (x == y) {
        case 0:
            swap(x, y);
            cout << "After swapping, x = " << x << " and y = " << y << endl;
            break;
        case 1:
            cout << "Both variables have the same value, no need to swap" << endl;
            break;
    }

    return 0;
}
