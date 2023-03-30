#include <iostream>
using namespace std;

int main(){
    int loc1, loc2, small, large;
    int average, sum = 0;
    const int size = 5;
    
    int num[5] = {25,69,50,10,84};
    
    for (int i = 0; i < 5; i++){
        cout<<"Enter number for array: ";
        cin>>num[i];
    }

    large = num[0];
    for(int j = 0; j<size; j++)
        if (num[j] >= large){
            loc1 = j;
            large = num[j];
        }   
    cout<<"\nThe largest number in the array is "<<large<<" at "<<loc1<<" index.\n";
    
    small = num[0];
    for (int k = 0; k<size; k++)
        if (num[k] <= small){
            loc2 = k;
            small = num[k];
        }
    cout<<"\nThe smallest number in the array is "<<small<<" at "<<loc2<<" index.\n";

    for(int m=0; m<size; m++){
            sum =  sum + num[m];
        }
    cout<<"\n\n`The sum of the array is "<<sum<<".";
    average = sum/(size);
    cout<<"\n\nThe Average of the array is "<<average<<"\n";

return 0;
}