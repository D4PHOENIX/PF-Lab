#include <iostream>
using namespace std;

int main(){
    int totalSec = 7202;
    int hours = totalSec/3600;
    int minutes = (totalSec%3600)/60;
    int seconds = totalSec%60;

    cout<<"Required format is "<< hours<< ":"<< minutes<<":"<<seconds;

return 0;
}