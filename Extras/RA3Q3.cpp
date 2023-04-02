#include <iostream>
using namespace std;

int main(){
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    cout<<"Enter numbers for first matrix: "; 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter numbers for second matrix: ";
    for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
            cin>>matrix2[k][l];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout<<"\n";
    for(int m=0;m<3;m++){
        for(int n=0;n<3;n++){
            cout<<result[m][n]<<"\t";
        }
    } 
return 0;
}