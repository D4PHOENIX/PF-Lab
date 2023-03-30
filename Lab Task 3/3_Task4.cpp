#include <iostream>
using namespace std;

int main(){
    int inputNum, onesDigit, tensDigit, hundredsDigit, thousandsDigit, num1, num2, requiredNum;

    cout<<"Enter a 4-digit number: "; 
    cin>> inputNum;
    inputNum = 4569;
    onesDigit = inputNum % 10;
    tensDigit = (inputNum/10) % 10;
    hundredsDigit = (inputNum/100) % 10;
    thousandsDigit = inputNum/1000;
    
    num1 = onesDigit * 2;
    num2 = hundredsDigit * 3;
    requiredNum = (num1 + num2) * thousandsDigit;
    
    cout<<"The number in the ones place is "<<onesDigit<<"\n";
    cout<<"The number in the Tens place is "<<tensDigit<<"\n";
    cout<<"The number in the Hundreds place is "<<hundredsDigit<<"\n";
    cout<<"The number in the Thousands place is "<<thousandsDigit<<"\n";
    cout<<"The required result of the experiments is "<< requiredNum;
    
return 0;
}