#include <iostream>
using namespace std;

int main(){
    int x = 8;
    int y = 0;
    while (x>=0 && y<=5){
        if (x==y)
            break;
        else
            cout<<x<<y;
    y+=2;
    x--;

    }

return 0;
}