#include<iostream>
using namespace std;
int main()
{
	int arr[] = {4, 45, 30, 60, 20, 8};
	int max1=0,max2=0;
	
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
     {  
     	if(arr[i]>max1 )
     	{
     		max2=max1;
     		max1=arr[i];  		
     }
     else if(arr[i]>max2 && arr[i]!=max1)
     {
     	max2=arr[i];
	 }
				       
	}
		 
	 
	 cout<<max1<<" "<<max2;
	 return 0;
}
