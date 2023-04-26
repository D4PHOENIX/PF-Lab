#include <iostream>
using namespace std;
int main(){
    int arr[10]={33,10,1,87,6,44,23,3,11,82};
    int i,j,temp;
    
    for(i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
    for (i=0; i<10; i++){
        for (j=0; j<10-1; j++)
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    }
    cout<<"\n";
    for(i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }

return 0;
}