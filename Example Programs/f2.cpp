#include<iostream>
using namespace std;



  int main(){


    int count=0;
    char ch[count];
    int i=0;

    cout<<"Enter a sequence of characters (end with '.'): ";
    cin>>ch[count];
    while(ch[count]!='.')
    {
        count++;
        cin>>ch[count];


    }

    cout<<"There were "<<count<<" characters in the string"<<endl;
    return 0;
 }
