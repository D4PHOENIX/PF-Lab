#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "PSYCHE/";
    string s2("GHOST");
    string s3 = "PHOENIX/";
    swap(s1,s3);
    s1+=s2;
    cout<<s1<<endl;
    cout<<s3.erase(s3.size()-1, 1)<<endl;
    string fullName;
    cout<<"Enter your full name: ";
    getline(cin, fullName); 

    cout<<"Your full name is "<<fullName<<".\n";
    cout<<"Total Characters in full name are "<<fullName.length()<<".\n";
    cout<<"Your First Name is "<<fullName.substr(0,4)<<".\n";

    // cout<<"Find first of of "<<s1.find();
return 0;
}