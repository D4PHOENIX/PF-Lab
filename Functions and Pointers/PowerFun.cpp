#include <iostream>
using namespace std;

int power(int base, int pow){
    int exp = 1;
    for(int i=0; i<pow; i++)
        exp *= base;

return exp;
}
int main(){
    int baseNum, powerNum;
    cout<<"Enter Base Number: ", cin>>baseNum;
    cout<<"Enter Power Number: ", cin>>powerNum;
    
    cout<<"\n"<<power(baseNum,powerNum);

return 0;
}