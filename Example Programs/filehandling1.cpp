#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char data[100];
	cout<<"Enter your name and age: ";
	cin.getline(data,100);
    
    //File write operation performed
	ofstream myfile("data.txt");
	myfile<<data;
	cout<<"File write operation performed successfully"<<endl;
	myfile.close();
	
	//File read operation performed
	cout<<"Reading from file operation started"<<endl;
	ifstream filename("data.txt");
	cout<<"display data: "<<data<<endl;
	filename.close();
	
return 0;
}
