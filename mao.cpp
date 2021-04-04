#include <map>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{   string str="sakshi";
 unordered_map<char,int>a;
	for(int i=0;i<str.length();i++)
	{
		if(a.find(str[i])==a.end())
		{
			a.insert(pair<char,int>(str[i],1));
		}
		else
		{
			a[str[i]]++;
		}
	}
	for(auto& it:a)
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
     
	return 0;
}
