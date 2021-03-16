#include<iostream>
#include<fstream>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	char ch;
	int key;
	cout<<"enter the value of key in numberic:";
	cin>>key;
	fin.open("input.txt");
	fout.open("output.txt");
	ch=fin.get();
	cout<<"cipher text is ";
	while(!fin.eof())
	{
	 	if(isupper(ch))
		    ch=(ch-65+key)% 26 + 65;
		else
	    	ch=(ch-97+key)% 26 + 97;
		cout<<ch;
		fout.put(ch);
		ch=fin.get();
	}
	fout.close();
	return 0;
	}
