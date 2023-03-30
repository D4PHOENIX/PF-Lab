#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    // Declaring Variables
    int i, j, matrix1[3][3], matrix2[3][3], sum[3][3];
    // Initializing first Matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter elements for first matrix: "; 
            cin>>matrix1[0][0];
        }
    }
    // Initializing second Matrix
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter elements for second matrix: ";
            cin>>matrix2[i][j];
        }
    }
    // Adding both Matrices
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Showing the output Matrix
    cout<<"Press any key to continue...";
    getch();
    cout<<"\n\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<sum[i][j]<<"\t";
        }
    }
    cout<<"\n\n"; 
return 0;
}