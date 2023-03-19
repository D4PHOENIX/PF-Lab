#include <iostream>
using namespace std;

int main(){
    int x, y, z, totalAngle;
    cout<<"Enter first angle: ";
    cin>> x;
    cout<<"Enter second angle: ";
    cin>> y;
    cout<<"Enter third angle: ";
    cin>> z;

    totalAngle = x+y+z;

    if (totalAngle == 180)
        cout<<"The angles you entered are of a triangle and are valid as their sum is "<< totalAngle<<".";
    else
        cout<<"The Angles you entered are not of a triangle as their sum is "<< totalAngle<<".";

return 0;
}
