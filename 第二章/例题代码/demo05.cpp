//�麯��ʵ�ֶ�̬��
#include<iostream>

using namespace std;

class Shape
{
public:
	virtual void draw()
	{
		cout<<"Draw something."<<endl;
	} 
};

class Line : public Shape
{
public:
	virtual void draw()
	{
		cout<<"Draw a line."<<endl;
	}
};

class Circle : public Shape
{
public:
	void draw()
	{
		cout<<"Draw a circle."<<endl;
	}
};
 
int main()
{
	Shape *p, obj;
	Line L1;
	
	// ��Line������Shape�����ֵ 
	obj = L1;
	obj.draw();
	
	// ��Line������ʼ��Shape������ 
	Shape &p1 = L1;
	p1.draw();
	
	// ��Line������ַ������ָ�븳ֵ 
	p = &L1;
	p->draw();
	
	// ��Circle������ַ������ָ�븳ֵ
	p = new Circle;
	p->draw();
	
	return 0; 
}
