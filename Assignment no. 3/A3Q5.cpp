#include <iostream>
using namespace std;

int main(){
    // Declaring Variables and Arrays
    const int n = 3, m = 1;
    int i,j,k;
    int inputMatrix[n][n];
    int inputVector[n][m];
    int resultMatrix[n][m] = {{0},{0},{0}};
    // Initializing Matrix
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"Enter elements for matrix: "; 
            cin>>inputMatrix[i][j];
        }
    }
    // Initializing Vector
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"Enter elements for vector: ";
            cin>>inputVector[i][j];
        }
    }
    // Multiplying the matrix and Vector
    for(i=0; i<n;i++){
        for(j=0; j<m;j++){
            for(k=0; k<n; k++)
            resultMatrix[i][j] += inputMatrix[i][k]*inputVector[k][j];
        }
    }
    //Showing Output
    cout<<"\n\n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<resultMatrix[i][j]<<"\n";
        }
    }
return 0;
}