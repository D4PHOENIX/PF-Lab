#include <iostream>
using namespace std;
int main(){
    int inputNum, ones, tens, i;
    while(inputNum>0 || inputNum<100){
        cout<<"Enter a number between 1 to 99: ";
        cin>>inputNum;
        string one = "\0", ten = "\0";
        if (inputNum>19){
            ones = inputNum%10;
            tens = (inputNum/10)%10;
        }
        char onesArray[20][10]={"\0","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve",
                        "Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        char tensArray[11][10]={"\0","\0","Twenty","Thirty","Forty","Fifty","Sixty","Seventy", "Eighty", "Ninety"};
        switch (inputNum)
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13:
            case 14: case 15: case 16: case 17: case 18: case 19:
                for(i=0;i<21;i++)
                    if (i==inputNum){
                        one = onesArray[i];
                    }
        if (inputNum>19){
        switch (ones)
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
                for(i=0;i<10;i++)
                    if (i==ones){
                        one = onesArray[i];
                    }
        switch (tens)
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
                for(i=0;i<10;i++)
                    if (i==tens){
                        ten = tensArray[i];
                    }
        cout<<"Entered number is "<<ten<<" "<<one<<".\n";
        }
        else cout<<"Entered number is "<<one<<".\n";
    }
return 0;
}