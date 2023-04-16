#include<iostream>
using namespace std;

void starline(int, char); //fucntion declaration or prototype
int main()
{
starline(40, '#'); //call the fucntion
cout << "Hello Everyone" << endl;
starline(30, '@'); // call the function
cout << "We are learning about function." << endl 
<< "We will learn to divide " 
<< "the code into parts" << endl
<< "It will be easy to learn" <<endl;
starline(20, '='); // call the fucntion
}

//fucntion definition
void starline(int n, char ch) //function declaration
{
	
for (int j=0; j<n; j++) //fucntion body
cout << ch;
cout << endl;
}
