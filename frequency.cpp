#include<iostream>
using namespace std;
int main()
{
	char str[]={"sakShi"};
	int count[256]={0};
	int len = sizeof(str)/sizeof(str[0]);
	for(int i=0;i<len;i++)
	{
		str[i]=tolower(str[i]);
	}
	int max=0;
	char result;
	for(int i=0;i<len;i++)
	{
		count[str[i]]++;
		if(max<count[str[i]])
		{
			max=count[str[i]];
			result=str[i];
		}
	}
	cout<<str<<" -> "<<result;
	return 0;
}
