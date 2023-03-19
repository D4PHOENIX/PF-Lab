#include <iostream>
using namespace std;

int main(){
    int num = 7;
    int sum = 0;
    cout<<"The multiples of 7 from 1 to 100 are below: \n";
    while (num < 100) {
        if (num % 7 == 0){
            cout<<num<<"\n";
            sum = sum + num;
        }
        num++;
    }
    cout<<"Their sum is "<<sum<<"."; 

return 0;    
}
