#include<iostream>
using namespace std;
struct Employee
{
      short id;int age;double wage;
};

int main (){
	Employee joe;
    joe.id = 14;   
    joe.age = 32; 
	//cin>>joe.id; 
    joe.wage = 24.15;
    Employee frank  = {15, 28, 18.27};
    
    int totalAge = joe.age + frank.age;
    
       if (joe.wage > frank.wage )
            cout << "joe makes more than Frank\n";  
       else if (joe.wage < frank.wage )
            cout << "joe makes less than Frank\n";  
      else 
            cout << "joe and Frank make the same amount\n";  
       frank.wage += 2.50;    
      ++ joe.age;

 return 0;
}

