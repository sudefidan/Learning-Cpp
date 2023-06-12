// Find area of circle
#include <iostream>
using namespace std;

inline float area(int radius)
{
	return 3.14*radius*radius;
}

int main()
{
	int radius;
	
	cout<<"Please enter radius =>";
	cin>>radius;
	cout<<"The area of circle = "<<area(radius)<<endl;
}