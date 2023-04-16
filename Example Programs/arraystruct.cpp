#include<iostream>
using namespace std;
const int SIZE = 4;

struct part //specify a structure
{
int modelnum;    //ID num of widget
int partnum;     //ID num of widget part
float cost;      //cost of part
};


int main(){
int n;
part apart[SIZE]; //DEFINE ARRAY OF STRUCTURES
for(n=0; n<SIZE; n++) //get values for all members	
{
cout<<endl;
cout<< "Enter model number: ";
cin >> apart[n].modelnum;  
cout<< "Enter part number: ";
cin >> apart[n].partnum;
cout<< "Enter cost number: ";
cin >> apart[n].cost;
}

cout <<endl;
for(n=0; n<SIZE; n++){
	cout << "Model: " <<apart[n].modelnum <<endl; 
    cout << "Part: " <<apart[n].partnum <<endl;
    cout << "Cost: " <<apart[n].cost <<endl;
}
return 0;
}

