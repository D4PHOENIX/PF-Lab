#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int j = 7;
    int k;
    int result[8];
    int array[8] = {11,12,13,14,15,16,17,18};
    for (k = 0; k < 8; k++) {
        if (k % 2 == 0) {
            result[k] = array[j];
            j--;
        }
        else {
            result[k] = array[i];
            i++;
        }
    }
    for(i=0;i<8;i++){
        cout<<result[i]<<"\t";
    }
return 0;
}