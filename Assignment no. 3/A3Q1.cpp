#include <iostream>
using namespace std;

int main(){
    int inputNum;
    cout<<"Enter a number: ";
    cin>>inputNum;
    bool primeNum = true;
    for(int i = 2; i<inputNum; i++){
        if(inputNum%i==0){
            cout<<"The entered number is not a prime number.";
            primeNum = false;
            break;
        }
    }
    if(primeNum == true)
    cout<<"The entered number is a prime number.";
return 0;
}