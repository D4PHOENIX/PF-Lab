#include <iostream>
using namespace std;

int main(){
    int engMarks;
    cout<< "Enter your English Marks: "; 
    cin>>engMarks;

    if (engMarks > 33)
        {
            cout<<"You have passed with "<<engMarks<<" marks.";
        }
    else
        {
            cout<<"You have failed with "<<engMarks<<" marks.";
        }
return 0;
}

