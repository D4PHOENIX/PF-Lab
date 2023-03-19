#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    char ch = '0';
    cout<<"Enter characters, z to terminate..\n";
    while (ch != 'z')
        ch = _getche();
    cout<<"\nProgram Ended.";


return 0;
}