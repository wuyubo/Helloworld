
#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout<<"setup A"<<endl;
	};
	virtual ~A()
	{
		cout<<"release A"<<endl;
	};
	void last()
	{
		cout<<"killed last A"<<endl;
	}
	virtual void killed()
	{
		cout<<"killed A"<<endl;
		delete this;
		cout<<"killed this"<<endl;
		last();
	}
};

class B: public A
{
public:
	B()
	{
		cout<<"setup B"<<endl;
	};
	virtual ~B()
	{
		cout<<"release B"<<endl;
	};
	void last()
	{
		cout<<"killed last B"<<endl;
	}
	//test
	void killed()
	{
		cout<<"killed B"<<endl;
		delete this;
		cout<<"killed this"<<endl;
		last();
		//第二次修改
	}
};

int main()
{
	B *b = new B;
	A *a = b;
	a->killed();
	while(1);
	return 0;
}
