# include<iostream>
# include<string>
#include<vector>
using namespace std;
int main()
{
	string str ;
	getline(cin,str);
	int i;
	cout<<str[i];
	for(i=0;i<str.length();i++)
	cout<<str[i];
	cout<<"\n"<<int(str[3]);
	vector<vector <int>>vect{{1,2,3,4},{5,6,7,8}};
	cout<<vect[1][1];
	vector<int>v(5);
	cout<<"\n";
	int n,m;
	vector<vector<int>> vec( n , vector<int> (m, 0));
 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout<< endl;
    }
	for(i=0;i<5;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<5;i++)
	{
		for(int j=1;j<=v[i];j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	return 0;
}
