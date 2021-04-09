#include<iostream>
using namespace std;

void merger(int A[],int l, int m , int r)
{
	int n1=m-l+1;
	int n2 = r-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=A[l+i];
	}
		for(int i=0;i<n2;i++)
	{
		R[i]=A[m+1+i];
	}
	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else 
		{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		A[k]=L[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		A[k]=R[j];
		k++;
		j++;
	}
}
void msort(int A[],int l , int r)
{
	if(r>l)
	{
		int m=l+(r-l)/2;
		msort(A,l,m);
		msort(A,m+1,r);
		merger(A,l,m,r);
	}
}
int main()
{
	int A[]={5,1,8,2,4,9,12,10};
	int n= sizeof(A)/sizeof(A[0]);
	msort(A,0,n-1);
for(int i=0;i<8;i++)
	{
		cout<<A[i]<<" , ";
	}
	return 0;
}
