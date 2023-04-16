#include <iostream>
#include <string>
using namespace std;
int main(){
string s1 = "We all should respect everyone";
cout <<s1<<endl;
cout<<"Total characters: "<<s1.length()<<endl;
// int len = a1.length();
int n;
n = s1.find("respect");  
cout << "Found respect at index: " << n << endl;
n = s1.find_first_of("abcd");
cout << "First of abcd at index: " << n <<endl;
n = s1.find_first_not_of("aeiouAEIOU");
cout << "First consonant at: " << n << endl;
return 0;
}
