#include <iostream>
using namespace std;

int main(){
    int temp;
    cout<<"Enter a temperature: ";
    cin>>temp;

    if(temp<= -173){
        cout<<"Ethyl Alcohol freezes at this temperature";
    }
    else if(temp>=172){
        cout<<"Ethyl Alcohol boils at this temperature";
    }
    else{
        cout<<"Ethyl Alcohol  neither freezes nor boils at this temperature";
    }
    
    if(temp<= -362){
        cout<<"Oxygen freezes at this temperature";
    }
    else if(temp>= -306){
        cout<<"Oxygen boils at this temperature";
    }
    else{
        cout<<"Oxygen neither freezes nor boils at this temperature";
    }

    if(temp<= 32){
        cout<<"Water freezes at this temperature";
    }
    else if(temp>=212){
        cout<<"Water boils at this temperature";
    }
    else{
        cout<<"Water freezes neither nor boils at this temperature";
    }

return 0;
}