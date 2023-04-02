#include <iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{5,3,6},{5,3,2},{8,6,9}};
    int vector[3][1] = {{3},{2},{6}};
    int result[3][1] = {{0},{0},{0}};
    for(int i=0; i<3;i++){
        for(int j=0; j<1;j++){
            for(int k=0; k<3; k++)
            result[i][j] += matrix[i][k]*vector[k][j];
        }
    }
    for(int m=0;m<3;m++){
        for(int n=0;n<1;n++){
            cout<<result[m][n]<<"\n";
        }
    }


return 0;
}