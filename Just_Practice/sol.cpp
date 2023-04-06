#include <iostream>
using namespace std;
int main()
{
	int n=1,first = 0;
	int limit =6,second = 1,sum =0;
	
	do
	{
		sum = first + second;
		first = second;
		second = sum;
		cout<<first<<" , ";		
		n++;
	}
	while(n<limit);
}