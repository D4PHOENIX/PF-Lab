#include <iostream>
using namespace std;

int main(){
    int costPrice, sellPrice;
    cout<<"Enter your Cost Price: ";
    cin>>costPrice;
    cout<<"Enter your Sell Price: ";
    cin>>sellPrice;

    if(costPrice < sellPrice)
        cout<<"You are in a profit of "<< sellPrice - costPrice;
    else if(costPrice > sellPrice)
        cout<<"You are in a loss of "<< sellPrice - costPrice;
    else
        cout<<"You sold on break even.";

return 0;    
}