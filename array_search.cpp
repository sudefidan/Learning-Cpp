// Find max and min in array in C++
#include <iostream>
using namespace std;

void findmax(int arr[10])
{
	int max;
	
	max=arr[0];
	
	for(int i=0;i<10;i++)
	{
		if(arr[i] > max)
		{
			max=arr[i];
		}
	}
	
	cout<<"Maximum element is "<<max<<endl;
}

void findmin(int arr[10])
{
	int min;
	
	min=arr[0];
	
	for(int i=0;i<10;i++)
	{
		if(arr[i] < min)
		{
			min=arr[i];
		}
	}
	
	cout<<"Minimum element is "<<min<<endl;
}

void findnum(int arr[10],int num)
{
	int found=0;
	
	for(int i=0;i<10;i++)
	{
		if(arr[i] == num)
		{
			found++;
		}
	}
	
	if(found == 0)
		cout<<"There is not any";
	else
		cout<<"There are "<<found<<" times in this array";
}
int main()
{
	int arr[10],num;
	
	for(int i=0;i<10;i++)
	{
		cout<<"Please enter element in ["<<i+1<<"] => ";
		cin>>arr[i];
	}
	cout<<endl;
	
	findmax(arr);
	findmin(arr);
	
	cout<<"\nWhich number you want to find? ";
	cin>>num;
	
	findnum(arr,num);
	cout<<endl;
	
	system("pause");
	return 0;
}