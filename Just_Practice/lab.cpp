#include <iostream>
using namespace std;

int main(){
    string name = "Ghost";
    int i, n1 = 50, n2;
                            
    for(i=25; i<=n1; i+=2){
        cout<<i<<"\t"<<name<<"\n";
        i += i;
        cout<<i<<"\n";
    }

return 0;
}