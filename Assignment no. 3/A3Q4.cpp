#include <iostream>
using namespace std;

int main(){
    const int size = 8;
    int i = 0, j = size - 1, k;
    int result[size];
    int array[size] = {11,12,13,14,15,16,17,18};
    for (k = 0; k < size; k++) {
        if (k % 2 != 0) {
            result[k] = array[i];
            i++;
        }
        else {
            result[k] = array[j];
            j--;
        }
    }
    for(i=0;i<size;i++){
        cout<<result[i]<<"\t";
    }
return 0;
}