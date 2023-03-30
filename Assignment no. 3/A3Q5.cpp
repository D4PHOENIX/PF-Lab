#include <iostream>
using namespace std;

int main(){
    const int n = 3, m = 1;
    int matrix[n][n] = {{5,3,6},{5,3,2},{8,6,9}};
    int vector[n][m] = {{3},{2},{6}};
    int result[n][m] = {{0},{0},{0}};
    int i,j,k;
    for(i=0; i<n;i++){
        for(j=0; j<m;j++){
            for(k=0; k<n; k++)
            result[i][j] += matrix[i][k]*vector[k][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<result[i][j]<<"\n";
        }
    }


return 0;
}