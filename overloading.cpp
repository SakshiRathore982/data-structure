#include<iostream>
using namespace std;
class A
{
	public :
		void print(int r)
		{
			cout<<"int :"<<r<<endl;
		}
		void print(double ft)
		{
			cout<<"float "<<ft<<endl;
		}
		void print(char* c)
		{
			cout<<"char "<<c<<endl;
		}
};
int main()
{
	A ob;
	ob.print(20);
	ob.print(3.14);
	ob.print("sakshi");
	return 0;
	}
