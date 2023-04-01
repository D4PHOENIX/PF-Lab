#include <iostream>
using namespace std;

void swapn(int& n1, int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
int main(){
    int num1 = 69, num2 = 71, num3 = 45, num4 = 81;
    swapn(num1, num2);
    swapn(num3, num4);

cout<<num1<<"\t"<<num2<<"\n";
cout<<num3<<"\t"<<num4<<"\n";


return 0;
}