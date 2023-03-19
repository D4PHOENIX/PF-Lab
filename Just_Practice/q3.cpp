#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int inputNum, i, cube;
    cout<<"Enter a number: ";
    cin>>inputNum;

    for(i=1; i<=inputNum; i++){
        cube = pow(i,3);
        cout<<"The cube of "<<i<<" is "<<cube<<".\n";
    }
    
return 0;
}