#include <iostream>
#include <string>
using namespace std;
int main(){
string full_name, nickname, address;
string greeting("Hello, ");
cout << "Enter your full name: ";
getline(cin, full_name); //read embedded blanks
cout << "your full name is: " << full_name << endl;
cout << "Enter your nickname: ";
cin >> nickname; // input to string object
greeting += nickname; //append name to greeting 
cout << greeting << endl;
cout << "Enter your address on separate lines\n";
cout << "Terminate with '$'\n";
getline(cin, address, '$'); //reads multiple line
cout << "your address is: " << address << endl;
return 0;
}
