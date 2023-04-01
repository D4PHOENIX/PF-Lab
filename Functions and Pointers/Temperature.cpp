#include <iostream>
using namespace std;

void temperature(float degF){
    float degC = (degF-32) * 5.0/9.0;
    float degK = degC + 273; 
    cout<<"\nEntered temperature in degree Celsius is: "<<degC<<" and in Kelvin is: "<<degK<<".\n";
} 
int main(){
    float inputTemp;
    cout<<"Enter a temperature in degree Fahrenheit: ";
    cin>>inputTemp;
    
    temperature(inputTemp);
return 0;
}
