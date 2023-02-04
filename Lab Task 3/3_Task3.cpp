#include <iostream>
using namespace std;

int main(){
    int inputNumber;
    cout<<"Enter any Number: ";
    cin>>inputNumber;
//taking input
    int requiredNumber;
    requiredNumber = (inputNumber%51+51)%51;

    cout<<"The required number is "<< requiredNumber;

return 0;
}