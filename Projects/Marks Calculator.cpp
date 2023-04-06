#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

const int size = 3;
// int inputNum[size], outputNum[size];
struct noice{
    int regNo;
    string fullName;
    int engMarks; //mathMarks[size], phyMarks[size], ICTMarks[size], PFMarks[size];
    // int totalMarks[size], obtainedMarks[size];
    // float percentage[size];
    // char grade[size][2];
};
noice students[size];

void arrayInitialization(){
    for (int i = 0; i < 3; i++){
        cout<<"Enter Registration number of student "<<i<<": "; cin>>students[i].regNo;
        cout<<"Enter marks obtained in English of student "<<i<<": "; cin>>students[i].engMarks;
        // cout<<"Enter Registration number of student "<<i<<": "; cin>>students.[i];
        cin.ignore();
        cout<<"Enter name of student "<<i+1<<": "; getline(cin,students[i].fullName);
        // cout<<"Enter Registration number of student "<<i<<": "; cin>>students.regNo[i];
    }
}
void arrayOutput(){
    for (int i = 0; i < 3; i++){
        // cout<<"\nRegistration number of student "<<i<<"is: "<<students[i].regNo;
        // cout<<"\nMarks obtained in English of student "<<i<<"is: "<<students[i].engMarks;
        cout<<"\n"<<students[i].fullName;
    }
    cout<<"\n";
}

int main(){
    arrayInitialization();
    cout<<setw(20);
    arrayOutput();
return 0;
}