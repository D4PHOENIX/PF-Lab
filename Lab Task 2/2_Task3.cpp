#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c, S, area;
    a = 7.6;
    b = 9.8;
    c = 16;
    S = (a+b+c)/2;
    area = sqrt(S*(S-a)*(S-b)*(S-c));

    cout<<"The area of the given triangle is "<< area;

return 0;
}