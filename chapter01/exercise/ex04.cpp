#include<iostream>

using namespace std;

class Rational
{
private:
	int top;
	int bottom;

public:
	Rational(int top, int bottom)
	{
		this->top = top;
		this->bottom = bottom;
	}
	
	void Add(Rational other)
	{
		top = other.top*bottom + other.bottom*top;
		bottom = bottom*other.bottom; 
	}
	
	void Sub(Rational other)
	{
		top = other.top*bottom - other.bottom*top;
		bottom = bottom*other.bottom; 
	}
	
	void Print()
	{
		cout<< top << "/" << bottom<<endl;
	}	
};


int main()
{
	int a,b,c,d;
	cout<<"����a/b�е�a,b��ֵ��";
	cin>>a>>b;
	cout<<"����c/d�е�c,d��ֵ��";
	cin>>c>>d;
	
	Rational t1(a,b);
	Rational t2(c,d);
	
	cout<<"a/b��ֵΪ";
	t1.Print();
	cout<<"a/b+c/dΪ";
	t1.Add(t2);
	t1.Print();
	cout<<"a/b-c/dΪ";
	t1.Sub(t2);
	t1.Print();
	return 0;
}
