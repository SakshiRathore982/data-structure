#include<iostream>
using namespace std;

int main()
{

	int A[]={5,1,8,2,4,9,12,10};
	int n= sizeof(A)/sizeof(A[0]);
	for(int i=1;i<n;i++)
	{    int key=A[i];
	   int j=i-1;
	   while(j>=0 && A[j]>key)
	   {
	   	A[j+1]=A[j];
	   	j--;
	   }
	   A[j+1]=key;
	}
for(int i=0;i<8;i++)
	{
		cout<<A[i]<<" , ";
	}
	return 0;
}
	
