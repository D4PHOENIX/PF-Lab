#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter starting Year: ";
    cin>>year;

    if(year%4 == 0){
        if (year%400== 0){
            if (year%100 != 0){
                while (year <= 2023){
                    cout<<year;
                    year++;
                }
            }
        }
    }

return 0;
}

// 3.	Write a program in which check leap year? 
// Hint: Leap year can be divisible by 4 and 400 but not divisible by 100.
