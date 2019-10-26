#include<iostream>

using namespace std;

class Shape
{
public: 
	virtual float Perimeter()=0;
};

class Rect : public Shape
{
private:
	float left, top;
	float width, height;
public:
	Rect(){
		left = 0;
		top = 0;
		width = 0;
		height = 0;
	}
	Rect(float x, float y, float w, float h){
		left = x;
		top = y;
		width = w;
		height = h;
	}
	virtual float Perimeter(){
		return (width + height)*2.0;
	}
};

class Circle : public Shape
{
	float xCenter, yCenter, radius;
public:
	Circle(){
		xCenter = 0;
		yCenter = 0;
		radius = 0;
	}
	Circle(float x, float y, float R){
		xCenter = x;
		yCenter = y;
		radius = R;
	}
	virtual float Perimeter(){
		return 3.1415 * 2.0 * radius;
	}
};

int main()
{
	Shape* p;
	
	Rect R1(2, 1, 3.3, 2.0);
	p=&R1;
	cout<<"�����ܳ���"<<p->Perimeter()<<endl;
	
	p=new Circle(0, 0, 2.0);
	cout<<"Բ���ܳ���"<<p->Perimeter();
	
	return 0;
}

