// Find factorial in C++
#include <iostream>
using namespace std;

int faktoriyel(int a)
 {
    int x;
    
	if(a>1)
 		x=a*faktoriyel(a-1);
	else
		x=1;
		
	return x;
 }

int main()
{
	int num;
	
	cout<<"Please give a number =>";
	cin>>num;
	
	cout<<"Factoriel = "<<faktoriyel(num)<<endl;
	cout<<endl;
	
	
	system("pause");
	return 0;
	
}