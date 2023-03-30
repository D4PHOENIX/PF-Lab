#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int matrix1[3][3];
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter elements for first matrix: "; 
            cin>>matrix1[i][j];
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<matrix1[i][j]<<"\t";
        }
    }
    
return 0;
}