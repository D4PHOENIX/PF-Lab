#include <iostream>
using namespace std;

int main(){
    int inputNum, count = 0;
    const int size = 100;
    int search[size]= {17, 12, 7, 35, 25, 18, 73, 28, 74, 70, 53, 8, 31, 33, 48, 46, 89, 69, 32, 38, 65, 32, 19, 61,
                        94, 79, 90, 55, 0, 42, 26, 9, 7, 9, 84, 29, 36, 58, 52, 97, 12, 76, 0, 24, 97, 2, 64, 15, 5, 
                        13, 41, 40, 78, 94, 69, 9, 19, 9, 25, 24, 35, 88, 71, 69, 7, 59, 7, 94, 18, 38, 41, 13, 22, 23, 
                        5, 69, 96, 9, 78, 48, 53, 65, 22, 77, 3, 67, 89, 41, 43, 69, 65, 2, 49, 44, 12, 42, 55, 23, 
                        17, 84};

    cout<<"Enter a number: ";
    cin>>inputNum;

    for(int i = 0; i<size; i++)
        if (search[i] == inputNum)
            count++;

    cout<<"\n\nThe number you entered appears "<<count<<" times in the array.\n";

return 0;
}