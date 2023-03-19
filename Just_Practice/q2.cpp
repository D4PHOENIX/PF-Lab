#include <iostream>
using namespace std;

int main(){
    float speed1, speed2, miles;
    cout<<"Enter speed 1: ";
    cin>>speed1;
    cout<<"Enter speed 2: ";
    cin>>speed2;

    speed1 *= 10;
    speed2 *= 10;
    
    for (; speed1<=speed2; speed1+=5){
        miles = speed1 * 0.6214;
        cout<<speed1<<" KPH\t\t"<<miles<<" MPH"<<"\n";
    }

return 0;
}