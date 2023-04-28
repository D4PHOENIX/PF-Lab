#include <iostream>
using namespace std;

void prime(int num){
    bool isPrime = true;
    if (num<2){
        isPrime = false;
    }
    else{
        for(int i = 2; i<=num/2; ++i){
            if (num%i==0){
                isPrime=false;
                break;
            }
        }
    }
    if (isPrime){
        cout<<"Entered number is a prime number.";
    }
    else{
        cout<<"Entered number is not a prime number.";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);

return 0;    
}