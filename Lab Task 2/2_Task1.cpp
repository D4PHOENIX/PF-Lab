#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float radius = 9.6;
    float volume = (4.0/3.0)*(M_PI * pow(radius,3));

    cout<<"A sphere of radius "<< radius<<"cm has a  "<< volume<<" cubic cm volume.";

return 0;
}
