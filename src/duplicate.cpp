#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the size of the array: ";
	cin>>n;
	int arr[n];
	int temp=0;
	int flag=0;
	
	cout<<"Enter the array: ";
	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for (int i=0,j=1; i<n; i++)
	{
		for (int j=i+1; j<n;j++)
		{
			if(arr[i]==arr[j])
			{	
				arr[j]= '\0';
				
			}
		}
	
	}
	cout<<"deleted array : ";
	for (int i =0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	for (int i =0; i<n; i++)
	{
		if (arr[i]=='\0')
		{
			temp=i;
			flag =1;
		}
		if (flag ==1)
		{
		for (int j=temp; j<n;j++)
		{
			arr[j]=arr[j+1];
		}
		n--;
		}
		flag =0;
	}
	
	cout<<endl<<"new array: ";
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
