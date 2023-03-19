#include <iostream>
using namespace std;

int main (){
    int armNum = 100;
    int onesDigit, tensDigit, hundsDigit;

    cout<<"The following numbers are the only 3-digit Armstrong Numbers: \n";
    
    while (armNum < 1000){
        onesDigit = armNum % 10;
        tensDigit = (armNum/10) % 10;
        hundsDigit = (armNum/100) % 10;
        if(armNum== onesDigit*onesDigit*onesDigit + tensDigit*tensDigit*tensDigit + hundsDigit*hundsDigit*hundsDigit){
			cout<<armNum<<"\n";
	}
    armNum++;
    }

return 0;
}