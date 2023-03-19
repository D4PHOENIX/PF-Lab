#include <iostream>
using namespace std;

int main(){
    int x, y;
    //case a
    x = 5, y = 8;
    cout<<"Output according to case a: \n";
    if (y==8){ 
        if (x==5){
            puts("@@@@@");
            puts("$$$$$");
            puts("&&&&&");
        }
        else{
            puts("#####");
        }
    }
    //case b
    x = 5, y = 8;
    cout<<"Output according to case b: \n";
    if (y==8){ 
        if (x==5){
            puts("@@@@@");
        }
        else{
            puts("#####");
            puts("$$$$$");
            puts("&&&&&");
        }       
    }
    //case c
    x = 5, y = 8;
    cout<<"Output according to case c: \n";
    if (y==8){ 
        if (x==5){
            puts("@@@@@");
            puts("&&&&&");
        }
        else{
            puts("#####");
            puts("$$$$$");
        }        
    }
    //case d
    x = 5, y = 7;
    cout<<"Output according to case d: \n";
    if (y==7){ 
        if (x==5){
            puts("#####");
            puts("$$$$$");
            puts("&&&&&");
        }
        else{
            puts("@@@@@");
        }        
    }
    
return 0;
}