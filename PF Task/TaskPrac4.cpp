#include <iostream>
using namespace std;

int main(){
    int count  = 0, num;
    cout<<"Enter a number: ";
    cin>> num;
    while (num >= 1){
        num = num/2;
        count++;
    }
    cout<<count;

return 0;
}
// Write a program that inputs a value in an integer number from user. For this number the 
// program returns the count for how many times can we divide this number by 2 to get down to 1”.