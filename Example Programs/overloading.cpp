#include<iostream>
using namespace std;

//fucntion definition
void repchar() //function declaration
{
	
for (int j=0; j<45; j++) //fucntion body
cout << '*';
cout << endl;
}

void repchar(char ch) //function declaration
{
	
for (int j=0; j<45; j++) //fucntion body
cout << ch;
cout << endl;
}

void repchar(char ch, int n) //function declaration
{
	
for (int j=0; j<n; j++) //fucntion body
cout << ch;
cout << endl;
}
int main()
{

repchar();
repchar('=');
repchar('+',30);

return 0;
}


