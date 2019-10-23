#include<iostream>
using namespace std;

int main()
{
	int arr[20];
	int i,n;
	
	cout<<"Enter the size of array: ";
	cin>>n;
	
	cout<<"Enter elements for array: ";
	for(i=0;i<n;i++)
	{
		cout<<"\narr[" << i<<"]=";
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	int p;
	cout <<"\n Enter the place of number you want to print:";
	cin>>p;
	
	cout<<arr[p-1];
}
