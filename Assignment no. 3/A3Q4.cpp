#include <iostream>
using namespace std;

int main(){
    const int size = 8;
    int i = 0, j = size - 1, k;
    int resultArray[size];
    int givenArray[size] = {11,12,13,14,15,16,17,18};
    cout<<"Array Before Rearranging is: \n";
    for(i=0;i<size;i++){
        cout<<givenArray[i]<<"\t";
    }
    for (k = 0; k < size; k++) {
        if (k % 2 != 0) {
            resultArray[k] = givenArray[i];
            i++;
        }
        else {
            resultArray[k] = givenArray[j];
            j--;
        }
    }
    cout<<"\n\nArray After Rearranging is: \n";
    for(i=0;i<size;i++){
        cout<<resultArray[i]<<"\t";
    }
return 0;
}

