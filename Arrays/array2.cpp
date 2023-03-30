#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
	const int size=5;
	
	int roll_no[size];
	char userName[30][255];
	// int subjectMarks[size];
	int physicsMarks[size];
	int mathMarks[size];
	int engMarks[size];
	int proFunMarks[size];
	int ICTMarks[size];
	float per[size];
	char grade[size];
	int totalMarks[size];
	
    cout<<"\nPlease enter the data for 5 subjects..."<<endl;
    for (int i = 0; i<size; i++)
    {
    	cout<<"\nPlease enter the data for 5 student No." << i+1<< " subjects."<<endl;
    	cout<<"Roll NO.:";
    	cin>>roll_no[i];
		cout<<"Enter the name of the students: ";
		getline(cin,userName[i]);
    	// cout<<"Marks out of (500):";
    	// cin>>subjectMarks[i];
		cout<<"Enter the marks of Physics: ";
		cin>>physicsMarks[i];
		cout<<"Enter the marks of Math: ";
		cin>>mathMarks[i];
		cout<<"Enter the marks of English: ";
		cin>>engMarks[i];
		cout<<"Enter the marks of Programming Fundamentals: ";
		cin>>proFunMarks[i];
		cout<<"Enter the marks of ICT: ";
		cin>>ICTMarks[i];
		totalMarks[i] = physicsMarks[i]+mathMarks[i]+engMarks[i]+proFunMarks[i]+ICTMarks[i];
    	per[i] = (float)totalMarks[i] / 500 * 100;
    	
    	if(per[i]>=80) grade[i]='A';
    	else if (per[i]>=70 && per[i]<80) grade[i]='B';
        else if (per[i]>=60 && per[i]<70) grade[i]='C';	
        else if (per[i]>=50 && per[i]<60) grade[i]='D';	
	    else if (per[i]>=40 && per[i]<50) grade[i]='E';
        else grade[i] = 'F';
    }
		cout <<"\n\n Press any key to continue....";
		getch();
		
		cout<<"\n \n \n \t \t Result List \n \n";
		cout<<setw(9)<<"Roll No."<<setw(7)<<"Marks"
		<<setw(12)<<"Percentage"<<"\tGrade"<<endl;
		
		for(int i=0; i<size; i++){
		cout<<setw(9)<<roll_no[i]<<setw(30)<<userName[i]<<setw(7)<<totalMarks[i]
		<<setw(12)
		<<setprecision(2) //digit after decimal point
		<<setiosflags(ios::showpoint) //always show decimal point
		<<setiosflags(ios::fixed) //don't show number in exponent
		<<per[i]<<"%\t"<<grade[i]<<endl;
	}
}
