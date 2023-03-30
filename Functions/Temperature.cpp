#include <iostream>
using namespace std;

float temperature(float& degF){
    float degC = (degF-32) * 5.0/9.0;
    return degC;
} 
int main(){
    float inputTemp, convertedTemp;
    cout<<"Enter a temperature in degree Fahrenheit: ";
    cin>>inputTemp;
    convertedTemp = temperature(inputTemp);

    cout<<"\nEntered temperature in degree Celsius is: "<<convertedTemp<<".\n";
return 0;
}
