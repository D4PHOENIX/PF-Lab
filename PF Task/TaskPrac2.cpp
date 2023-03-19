#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    char oper;
    cout<<"Enter first number: "; cin>> firstNumber;
    cout<<"Enter Second number: "; cin>> secondNumber;
    cout<<"Specify the function(+, -, *, /): "; cin>> oper;
    
    switch (oper){
        case '+':
            cout<<firstNumber<<" + "<<secondNumber<<" = "<<firstNumber+secondNumber;
            break;
        case '-':
            cout<<firstNumber<<" - "<<secondNumber<<" = "<<firstNumber-secondNumber;
            break;
        case '*':
            cout<<firstNumber<<" * "<<secondNumber<<" = "<<firstNumber*secondNumber;
            break;
        case '/':
            cout<<firstNumber<<" / "<<secondNumber<<" = "<<firstNumber/secondNumber;
            break;
        default:
        cout<<"The specified function does not exist.";
    }

return 0;
}