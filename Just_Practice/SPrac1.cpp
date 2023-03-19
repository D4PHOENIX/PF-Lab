#include <iostream>
using namespace std;

int main(){
    int unitRate_1 = 30;
    int unitRate_2 = 35;
    
    int unitsUsed, monthBill;
    cout<<"Total Units used in a month:";
    cin>>unitsUsed;

    switch (unitsUsed >= 300){
        case 0:
            monthBill = unitsUsed * unitRate_1;
            cout<<"The electricity bill of this month is "<<monthBill<<".";
            break;
        case 1:
            monthBill = unitsUsed * unitRate_2;
            cout<<"The electricity bill of this month is "<<monthBill<<".";
            break;
    }
    
    // if (unitsUsed >= 250){
    //     monthBill = unitRate_2 * unitsUsed;
    //     cout<<"The electricity bill of this month is "<<monthBill<<".";
    // }   
    // else{
    //     monthBill = unitRate_1 * unitsUsed;
    //     cout<<"The electricity bill for this month is "<<monthBill<<".";
    // }

return 0;
}

