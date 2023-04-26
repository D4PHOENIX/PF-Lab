#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
struct students{
    int regNo;
    string name;
    int obtainedMarks;
    int totalMarks;
    float percentage;
};
int i;
const int size = 1;
students data[size];
void arrayInitialization(){
    students info;
    for (i = 0; i<size;i++){
        cout<<"Enter reg no: ", cin>>data[i].regNo;
        cin.ignore();
        cout<<"Enter your name:";
        getline(cin,data[i].name);
        cout<<"Enter obtained marks: ";
        cin>>data[i].obtainedMarks;
        cout<<"Enter total marks: ";
        cin>>data[i].totalMarks;
        data[i].percentage = float(data[i].obtainedMarks)/float(data[i].totalMarks) * 100;     
    }
}
void arrayOutput(){
    students show;
    cout<<setw(15)<<"Student Name"<<"|"<<setw(20)<<"Registration Number"<<"|"<<setw(15)<<"Obtained Marks"<<"|"<<setw(12)<<"Total Marks"<<"|"<<setw(12)<<"Percentage\n";
    for (i = 0;i<size;i++){
        cout<<setw(15)<<data[i].name<<"|"<<setw(20)<<data[i].regNo<<"|"<<setw(15)<<data[i].obtainedMarks<<"|"<<setw(12)<<data[i].totalMarks<<"|"<<setw(11)<<data[i].percentage<<"%\n";
    }
}

int main(){
    arrayInitialization();
    cout<<"\n\n";
    arrayOutput();
return 0;
}
