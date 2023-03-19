#include <iostream>
using namespace std;

int main(){
    int rev[10]={9,54,34,37,43,12,21,24,34,42};
    int temp;
    cout<<"The original array is: \n";
    for (int i=0; i<10; i++){
        cout<<rev[i]<<"\t";
    }
    for (int k = 0, j = 9; k<5; k++,j--){
        temp = rev[k];
        rev [k] = rev[j];
        rev [j] = temp;
    }
    cout<<"\n\nThe reversed array is: \n";
    for (int n=0; n<10; n++){
        cout<<rev[n]<<"\t";
    }

return 0;
}