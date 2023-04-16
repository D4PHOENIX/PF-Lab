#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct employee{    //user define aggregate datatype
		string name;
		int age;
		float salary;
	};
void writeEmployeeData(employee emp){
	ofstream myfile("xyz.txt", ios::app);
	if(myfile.is_open()){
		myfile<<emp.name<< " " <<emp.age<< " " << emp.salary<<endl;
		myfile.close();
		cout<<"employee record has been written";
	}else{
		cout<<"unable to open your file"<<endl;
	}
}

void readEmployeeData(){
	ifstream myfile("xyz.txt");
	if(myfile.is_open()){
		employee emp;
	while(myfile>>emp.name>>emp.age>>emp.salary){
		cout << "Name " <<emp.name<<endl;
		cout << "Age "  <<emp.age<<endl;
		cout << "Salary" <<emp.salary<<endl;
	}
	myfile.close();
	}else {
		cout<<"unable to open your file"<<endl;
	}
}

int main(){	
employee emp;
cout<<"enter name: ";
getline(cin, emp.name);
cout<<"enter age: ";
cin>>emp.age;
cout<<"enter salary: ";
cin>>emp.salary;

writeEmployeeData(emp);
readEmployeeData();

return 0;
}
