#include<iostream>
using namespace std;
int main()
{
	int arr[]={6,1,9,2,3,5,12,11};
	int st=0;
	int end =sizeof(arr)/sizeof(arr[0])-1;
	int key= 7;
	while(st<=end)
	{  
	  int 	mid=st+(end-st)/2;
	  cout<<arr[mid];
		if(arr[mid]==key)
		{  cout<<"found at "<<mid;
		  break;
		}
     	if(arr[mid]<key)
			{
				st=mid+1;
			}
		else
			end=mid-1;
		
		int end =sizeof(arr)/sizeof(arr[0])-1;	
	}
	for(int j=0;j<=8;j++)
	{
	for(int i=0;i<=8;i++)
	{  
		if(arr[i]>arr[i+1])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
