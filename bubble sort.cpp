#include<iostream>
using namespace std;
void swap(int *a , int * b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{

	int A[]={5,1,8,2,4,9,12,10};
	int n= sizeof(A)/sizeof(A[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				swap(&A[j],&A[j+1]);
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		cout<<A[i]<<" , ";
	}
	
	return 0;
	}
