#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
using namespace std;
// defining the number of students for which the program will generate a result
const int size = 2;
int i;
// making a structure to relate the different types of data entered for a student
struct resultData{
    char grade;
    string button;
    string fullName;
    int regNo;
    int engMarks, mathMarks, phyMarks, ICTMarks, PFMarks;
    int totalMarks, obtainedMarks;
    float percentage;
};
// A global array for generating result for multiple students
resultData students[size];
// Making a starline function to differentiate between different lines
void starline(int count){
    cout<<"\n";
    for(i=0;i<count;i++)
        cout<<"*";
    cout<<"\n";       
}
// Making a function to define the grades on different percentages
void grades(int percent, int j){
    if (percent>=90) students[j].grade = 'A';
    else if (percent>=80 && percent<90) students[j].grade = 'B';  
    else if (percent>=70 && percent<80) students[j].grade = 'C';  
    else if (percent>=60 && percent<70) students[j].grade = 'D';  
    else if (percent<60) students[j].grade = 'F';  
}
// A function for asking the user to enter the data for students
void studentsDataInitialization(){
    starline(30);
    for (i = 0; i < size; i++){
        cout<<"\nEnter Data for Student "<<i+1<<": \n\n";
        // Entering Data From the User
        cout<<"Enter Registration number: ",       cin>>students[i].regNo;
        cin.ignore();
        cout<<"Enter Name of student: ";           getline(cin,students[i].fullName);
        cout<<"Enter marks obtained in English: ", cin>>students[i].engMarks;
        cout<<"Enter marks obtained in Math: ",    cin>>students[i].mathMarks;
        cout<<"Enter marks obtained in ICT: ",     cin>>students[i].ICTMarks;
        cout<<"Enter marks obtained in Physics: ", cin>>students[i].phyMarks;
        cout<<"Enter marks obtained in PF: ",      cin>>students[i].PFMarks;
        // Performing calculations
        students[i].totalMarks = 500;
        // Initializing Obtained Marks for array
        students[i].obtainedMarks = students[i].mathMarks + students[i].engMarks + students[i].phyMarks + students[i].ICTMarks + students[i].PFMarks;
        // Initializing Percentage for array
        students[i].percentage = (float(students[i].obtainedMarks)*100)/float(students[i].totalMarks);
        //using grades function for defining grades
        grades(students[i].percentage,i);
        // Making colorful Pass/Fail Button
        if (students[i].percentage <= 60) students[i].button = "\033[41m Fail \033[0m";
        else students[i].button = "\033[42m Pass \033[0m";
    }       
}
// Making a function for showing the output result   
void studentsDataOutput(){
    // Making Header Column for the output
    starline(161);
    cout<<setw(15)<<"Student Name"<<"|"<<setw(20)<<"Registration Number"<<"|"<<setw(14)<<"English Marks"<<"|"<<setw(11)<<"Math Marks"<<"|"<<setw(14)<<"Physics Marks"<<"|"<<setw(10)<<"ICT Marks"<<"|"<<setw(9)<<"PF Marks"<<"|"<<setw(15)<<"Obtained Marks"<<"|"<<setw(12)<<"Total Marks"<<"|"<<setw(12)<<"Percentage"<<"|"<<setw(6)<<"Grade"<<"|"<<setw(12)<<"Pass/Fail";
    starline(161);
    // The actual result of all students entered
    for(i=0;i<size;i++)
    cout<<setw(15)<<students[i].fullName<<"|"<<setw(20)<<students[i].regNo<<"|"<<setw(14)<<students[i].engMarks<<"|"<<setw(11)<<students[i].mathMarks<<"|"<<setw(14)<<students[i].phyMarks<<"|"<<setw(10)<<students[i].ICTMarks<<"|"<<setw(9)<<students[i].PFMarks<<"|"<<setw(15)<<students[i].obtainedMarks<<"|"<<setw(12)<<students[i].totalMarks<<"|"<<setw(11)<<students[i].percentage<<"%|"<<setw(6)<<students[i].grade<<"|   "<<students[i].button<<"\n";
    starline(161);
}
// A function to clear the screen after taking all the inputs from the user, using system("CLS") from <stdlib>
void clearScreen(){
    starline(30);
    cout<<"\nPress any key to continue to output screen...\n";
    getch();
    system("CLS");
}
// The Main function which will call all the functions
int main(){
    studentsDataInitialization();
    clearScreen();
    studentsDataOutput();
return 0;
}