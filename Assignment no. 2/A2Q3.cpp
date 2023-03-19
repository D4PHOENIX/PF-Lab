#include <iostream>
using namespace std;

int main(){
    int count = 0;
    while (count <=2){
        int accNum, curBalance, credBefore, credAfter, exceededAmount;
        cout<<"Enter your Account Number: ";
        cin>>accNum;
        cout<<"Enter your Credit Limit before the recession: ";
        cin>>credBefore;
        cout<<"Enter your current account balance: ";
        cin>>curBalance;

        credAfter = credBefore/2;
        exceededAmount = curBalance - credAfter;

        cout<<"You had a credit limit of "<<credBefore<<".";
        cout<<" and after cutting in half, your new credit limit is "<<credAfter<<".\n";
        
        if (exceededAmount > 0)
            cout<<"You have exceeded your new credit limit by "<<exceededAmount<<".\n"; 
        else
            cout<<"You have not exceeded your new credit limit.\n";
    count++;
    }
return 0;
}
