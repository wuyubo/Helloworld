
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
};

class C: public B
{
public:	
	C()
	{
		cout<<"setup C"<<endl;
	}	
	~C()
	{
		cout<<"release C"<<endl;
	}
};

int main()

{
	B *b = new C;
	A *a = b;
	a->killed();
	while(1);
	return 0;
}
