#include <iostream>
using namespace std;

int main(){
    int scoops, totalAmount;
    int scoopPrice = 50;
    int waferPrice = 10;
    char wafers;

    cout<<"Enter the number of scoops you want: ";
    cin>>scoops;

    if (scoops >= 1 && scoops <= 3){
        cout<<"Enter 'y' if you want an extra wafer 'n' if you don't: ";
        cin>>wafers;
            if (wafers == 'y'){
                totalAmount = (scoopPrice*scoops) + waferPrice;
            }
            else{
                totalAmount = scoopPrice*scoops;
            }
        cout<<"Your total Amount is "<<totalAmount<<".";
    }
    else{
        cout<<"The amount of scoops you entered is invalid.";
    }

return 0;
}