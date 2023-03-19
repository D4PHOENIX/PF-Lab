#include <iostream>
using namespace std;

int main(){
    float b, h, A;
    
    cout<<"Enter the base of triangle: "; 
    cin>>b; 
    cout<<"Enter the height of triangle: "; 
    cin>>h;

    A = (1.0/2.0) * b * h;
    cout<<"The triangle with base "<< b <<" and height "<< h <<" is "<< A <<"."; 

return 0;
}

