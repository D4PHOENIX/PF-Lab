#include <iostream>
using namespace std;

int main(){
    int rows = 6;
    int i,j,n=1;
    for (i=0; i<rows;i++){
        for (j=0; j<=i;j++){
            cout<<n<<" ";
            n++;
            }
    cout<<endl;
    }
return 0;    
}