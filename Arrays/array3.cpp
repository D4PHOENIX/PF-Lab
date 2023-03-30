#include <iostream>
using namespace std;

int main(){
    const int n = 2;
    const int m = 3;
    
    int matrix [2][3] = {{69,45,36},{69,43,98}};

    double sum = 0; 
    double average;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            sum += matrix[i][j];
        }
    }
    cout<<"The sum of the array is "<<sum<<".\n\n";
    for (int k = 0; k<n;k++){
        for (int l = 0; l<m; l++){
        cout<<"The value at ("<<k<<","<<l<<") index is: "<<matrix[k][l]<<"\n";
        }
    }


    average = sum/(n*m);
    cout<<"\n\nThe Average of the array is "<<average<<"\n";

return 0;
}