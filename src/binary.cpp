#include <iostream>
using namespace std;

// Binary search

int binary(int *arr,int l,int h,int key)
{
	int mid;
	if(l<=h){
	 mid = (l+h)/2;

            if (key == arr[mid])
            {
                return mid;
            }

            else if (mid>key)
            {
               return binary(arr,l,mid-1,key);
            }
            else
              return binary(arr, mid+1,h,key);
	}
cout<<"not found";
}
int main()
{	
	int x;
	cout << "Enter number of elements of array" << endl;
	cin >> x;
	cout << "Enter elements of your array (integers)" << endl;
	
	int arr[x];
	for (int i=0;i<x;i++)
	{
		cin>>arr[i];
		
	}
		
	int num;
	cout << "Enter number to search for" << endl;
	cin >> num;
	
	int index = binary(arr,0,x-1,num);
	cout<<index;
}
