// find the max difference between the adajacent element in array 
// for exmple:
/*  
input:
4
2,1,7,1,8
output :
1

*/
#include<iostream>
int find(int arr[],int n)
{
  {  int max=-999999;
   for(int i=0;i<n;i++)
   {
     int check = arr[i]-arr[i+1];
     for(int i=0;i<n-1;i++)
     {
       if(max<check)
       {
         max=check;
       }
     }
     return max;
   }
int main()
{
  int n;
  cin>>n;
  cout<<"enter the array":
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<find(arr,n);
  return 0;
}
   
