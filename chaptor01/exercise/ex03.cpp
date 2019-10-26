/*
����������
�༶��17�������ѧ�뼼��2��
ѧ�ţ�170201102778
���ݣ�P26 ϰ��1 3 
*/
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

class Triangle
{
private:
	double a;
	double b;
	double c;
	
public:
	Triangle(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	
	~Triangle(){}
	
	double Area()
	{
		double p = 0.5*(a+b+c);
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	
	void show()
	{
		cout<<"���Ϊ "<<Area()<<endl;
	}
	
	void judge();
	
};

void Triangle::judge()
{
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		cout<<"����������ֱ��������"<<endl;
	else if(a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
		cout<<"�������������������"<<endl;
	else if(a*a+b*b>c*c || a*a+c*c>b*b || b*b+c*c>a*a)
		cout<<"���������Ƕ۽�������"<<endl;
}

int main()
{
	int a,b,c;
	cout<<"���������������ߣ�";
	cin>>a>>b>>c;
	Triangle tr1(a,b,c);
	tr1.judge();
	tr1.show();
	
	return 0;
}
