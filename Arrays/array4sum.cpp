#include <iostream>
using namespace std;

int main(){
    int num[100];
    int sum = 0;

    for(int i=0; i<100; i++){
        num[i]=i;
        sum =  sum + num[i];
    }
    cout<<"The sum of the array is "<<sum<<".";

return 0;
}