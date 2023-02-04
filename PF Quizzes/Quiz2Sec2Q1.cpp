#include <iostream>
using namespace std;

int main(){
    int inputNum, numType;
    cout<<"Enter a Number: ";
    cin>>inputNum;

    numType = inputNum % 2;

    switch (numType){
        case 1:
            cout<<"The number you entered is odd and required number is "<< inputNum-1;
            break;
        case 0: 
            cout<<"The number you entered is even and required number is "<< inputNum+1;
            break;
    }

return 0;    
}