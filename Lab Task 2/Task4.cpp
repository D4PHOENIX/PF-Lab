#include <iostream>
using namespace std;

int main(){
    char firstLetter = 'D';
    char add1 = ++firstLetter;
    char sub1 = --firstLetter;

    cout<<"The first letter of my name is "<< firstLetter <<endl;
    cout<<"Adding 1 in it gives "<< add1<< endl;
    cout<<"Subtracting 1 from it gives "<< sub1;

return 0;
}