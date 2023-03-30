#include <iostream>
using namespace std;
int main(){
    int num, onethDigit, tenthDigit;
    string oneth, tenth;
    while(num<1 || num>99){
    cout<<"Enter a number: ";
    cin>>num;
    }
    if (num<11 || num>19){
    onethDigit = num%10; tenthDigit = num/10; 
    }
    else{
        onethDigit = num;
    }
    switch(onethDigit){
        case 1:
            oneth = "One";
            break;
        case 2:
            oneth = "Two";
            break;
        case 3:
            oneth = "Three";
            break;
        case 4:
            oneth = "Four";
            break;
        case 5:
            oneth = "Five";
            break;
        case 6:
            oneth = "Six";
            break;
        case 7:
            oneth = "Seven";
            break;
        case 8:
            oneth = "Eight";
            break;
        case 9:
            oneth = "Nine";
            break;
        case 10:
            oneth = "Ten";
            break;
        case 11:
            oneth = "Eleven";
            break;
        case 12:
            oneth = "Twelve";
            break;
        case 13:
            oneth = "Thirteen";
            break;
        case 14:
            oneth = "Fourteen";
            break;
        case 15:
            oneth = "Fifteen";
            break;
        case 16:
            oneth = "Sixteen";
            break;
        case 17:
            oneth = "Seventeen";
            break;
        case 18:
            oneth = "Eighteen";
            break;
        case 19:
            oneth = "Nineteen";
            break;
    }
    char ten[11][20]= {"\0","\0","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    for (int i=2; i<11;i++){
        if(i==tenthDigit){
            tenth = ten[i];
            break;
        }
    }
    cout<<"Entered number in words is "<<tenth<<" "<<oneth;
return 0;
}