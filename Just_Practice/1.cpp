#include <iostream>
using namespace std;

int main(){
    int num1, j, i;
    cout<<"Enter a number: ";
    cin>>num1;

    bool prime = true;
    
        for (i=3;i<=num1; i+=2){
            for (j=3;j<=i;j +=2){
                if (i%j==0){
                    break;
                }
            }
        }
    if(prime == true)
        cout<<i<<"\n";

return 0;
}