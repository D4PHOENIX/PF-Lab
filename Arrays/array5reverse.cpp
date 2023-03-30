#include <iostream>
using namespace std;

int main(){
    const int size = 10;
    int rev[size]={9,54,34,37,43,12,21,24,34,42};
    int temp , i ;
    cout<<"The original array is: \n";
    for ( i=0; i<10; i++){
        cout<<rev[i]<<"\t";
    }
    for (int k = 0, i = 9; k < size/2; k++,i--){
        temp = rev[k];
        rev [k] = rev[i];
        rev [i] = temp;
    }
    cout<<"\n\nThe reversed array is: \n";
    for (int n=0; n<10; n++){
        cout<<rev[n]<<"\t";
    }

return 0;
}