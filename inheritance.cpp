#include<iostream>
using namespace std;
class A
{   public:
	int len;
	int bre;

		A(int l=20,int b=40)
		{   cout<<"jdjfh"<<endl;
			len=l;
			bre=b;
		}
		~A()
		{
			cout<<"base class destructor"<<endl;
		}
	
};
class B: public A{
	public:
			int area()
		{
			return len*bre;
		}
		int c()
		{
			return area() > this->area();
		}
		~B()
		{
			cout<<"derived class destructor"<<endl;
		}
};
int main()
{
	A ob(10,10);
	
	B ob1;
	if(ob1.c())
	{
		cout<<"sakshi"<<endl;
	}
	else
	cout<<"rathore"<<endl;
	 return 0;
	}
