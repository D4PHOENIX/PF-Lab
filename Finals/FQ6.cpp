#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct medInfo{
    int ID;
    string name;
    string manufacturer;
    string expDate;
};
const int size = 1;
int i, j;
medInfo data[size];

void arrayInitialization(){
    for(i=0;i<size;i++){
        cout<<"Enter medicine ID: ", cin>>data[i].ID;
        cin.ignore();
        cout<<"Enter medicine name: ";
        getline(cin, data[i].name);
        cout<<"Enter medicine manufacturer: ";
        getline(cin, data[i].manufacturer);
        cout<<"Enter medicine expiry date: ";
        getline(cin, data[i].expDate);
    }
    ofstream medFile("medData.txt");
    if (medFile.is_open()){
        for(i=0;i<size;i++){
            medFile<<data[i].ID<<"\n";
            medFile<<data[i].name<<"\n";
            medFile<<data[i].manufacturer<<"\n";
            medFile<<data[i].expDate<<"\n";
        }
        medFile.close();
    }
}

// void medicineFile(){
    

int main(){
    arrayInitialization();
    // medicineFile();

return 0;
}