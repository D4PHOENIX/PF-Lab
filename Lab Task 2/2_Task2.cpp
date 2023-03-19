#include <iostream>
using namespace std;

int main(){
    int basicPay = 21500;
    int sale = 55697404;
    float bonus = (sale*10.5)/100;
    float netPay = basicPay + bonus;
    
    cout<<"The basic pay of the Salesman is "<< basicPay<< endl;
    cout<<"Bonus of the given month is "<< bonus<< endl;
    cout<<"The net pay of the Salesman is "<< netPay;

return 0;
}