#include<iostream>
using namespace std;
int main (){
int year;
cout<<"Enter a year ";
cin>>year;
    if(year%400==0)
        cout<<"it is a leap year";
    else if(year%100==0)
        cout<<"it is not a leap year";
    else if(year%4==0)
        cout<<"it is a leap year";
    else
        cout<<"it is not a leap year";

return 0;
} 