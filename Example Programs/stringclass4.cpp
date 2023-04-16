#include <iostream>
#include <string>
using namespace std;
int main(){
string s1("Quick! call the police.");
string s2("Doctor");
string s3("Don't");
s1.erase(0, 7); //remove Quick!
s1.replace(9, 6, s2); //replace "Police" with "Doctor"
s1.replace(0, 1, "C"); //replace C with c
s1.insert(0, s3); //insert "Don't" at beginning
s1.erase(s1.size()-1, 1); //remove "."
s1.append(3, '!'); //append "!!!"
int x = s1.find(' '); //find a space
while (x < s1.size() ) //loop while spaces remain
{
s1.replace(x, 1, "/"); //replace with slash 
x = s1.find(' '); //find next space
}
cout << "s1: " << s1 << endl;
return 0;
}
