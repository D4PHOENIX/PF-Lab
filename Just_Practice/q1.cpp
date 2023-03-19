#include <iostream>
using namespace std;

int main(){
    int n;
    while (n!=0){
    cout<<"Enter a number: ";
    cin>>n;
        if (n == 0){
            cout<<"The number entered is invalid.";
            break;
        }
        cout<<"The square of entered number is "<<n*n<<".\n";
    }
return 0;
}