#include<iostream>

using namespace std;

/*
 ����1 
*/
class Point
{
public:
	virtual float area()=0;
	virtual float perimeter()=0;
	virtual void show()=0;
};
class Rect : public Point
{
	int width, height;
public:
	Rect(int width, int height): width(width), height(height){}
	float area()
	{
		return width * height;
	}
	float perimeter()
	{
		return (width + height) * 2;
	}
	void show()
	{
		cout<<"�����ο�Ϊ:"<<width<<",��Ϊ:"<<height;
		cout<<",�ܳ�Ϊ:"<<perimeter()<<",���Ϊ:"<<area()<<endl;	
	}
};
class Circle : public Point
{
	int radius;
public:
	Circle(int r): radius(r){}
	float area()
	{
		return radius * radius * 3.14;
	}
	float perimeter()
	{
		return radius * 2 * 3.14;
	}
	void show()
	{
		cout<<"Բ�İ뾶Ϊ:"<<radius;
		cout<<",�ܳ�Ϊ:"<<perimeter()<<",���Ϊ:"<<area()<<endl;	
	}
};

/*
 ����2 
*/ 
class Container
{
public:
	virtual float sArea()=0;
	virtual float volume()=0;
	virtual void show()=0;
}; 
class Sphere : public Container
{
	int radius;
public:
	Sphere(int r): radius(r){}
	float sArea()
	{
		return 4 * radius * radius * 3.14;
	}
	float volume()
	{
		return 3.14 * radius * radius * radius * 4.0 / 3.0;
	}
	void show()
	{
		cout<<"����뾶Ϊ"<<radius<<",�����Ϊ"<<sArea()<<",���Ϊ"<<volume()<<endl; 
	}
};
class Cylinder : public Container
{
	int radius, height;	
public:
	Cylinder(int r, int h): radius(r), height(h){}
	float sArea()
	{
		return 2*(radius*radius*3.14) + 2*radius*3.14*height;
	}
	float volume()
	{
		return radius*radius*3.14*height;
	}
	void show()
	{
		cout<<"Բ����뾶Ϊ"<<radius<<",��Ϊ"<<height<<",�����Ϊ"<<sArea()<<",���Ϊ"<<volume()<<endl; 
	}
};
class Cube : public Container
{
	int side;
public:
	Cube(int s): side(s){}
	float sArea()
	{
		return side*side*6;
	}
	float volume()
	{
		return side*side*side;
	}
	void show()
	{
		cout<<"������߳�Ϊ"<<side<<",�����Ϊ"<<sArea()<<",���Ϊ"<<volume()<<endl; 
	}
};

/*
 ����3 
*/
class ShapeT
{
public:
	virtual float area()=0;
};
class CircleT : public ShapeT
{
	int radius;
public:
	CircleT(int r): radius(r){}
	float area()
	{
		return 3.14*radius*radius;
	}
};
class RectangleT : public ShapeT
{
	int width, height;
public:
	RectangleT(int w, int h): width(w), height(h){}
	float area()
	{
		return width * height;
	}
};
class TriangleT : public ShapeT
{
	int a, b ,c;
public:
	TriangleT(int a, int b, int c): a(a), b(b), c(c){}
	float area()
	{
		return (a+b+c)/2;
	}
}; 

/*
 ����4 
*/
class ShapeF
{
	int r;
public:
	ShapeF(int r)
	{
		this->r = r;
	}
	virtual float volumn()=0;
	int getR()
	{
		return r;
	}
};
class CylinderF : public ShapeF
{
	int height;	
public:
	CylinderF(int r, int h): ShapeF(r), height(h){}
	float volumn()
	{
		return getR()*getR()*3.14*height;
		
	}
};
class CubeF : public ShapeF
{	
public:
	CubeF(int r): ShapeF(r){}
	float volumn()
	{
		return getR()*getR()*getR();
		
	}
};
class SphereF : public ShapeF
{	
public:
	SphereF(int r): ShapeF(r){}
	float volumn()
	{
		return getR()*getR()*getR()*3.14*4.0/3.0;
		
	}
};

/*
 ����5 
*/
class TDimension
{
	int (*a)[2];
public:
	TDimension(int a[2][2]) : a(a){}
	TDimension()
	{
		a = new int[2][2]();
	}
	TDimension operator + (int a[2][2])
	{
		TDimension temp;
		for(int i=0; i<2; i++)
			for(int j=0; j<2; j++)
				temp.a[i][j] = this->a[i][j] + a[i][j];
		
		return temp;
	}
	TDimension operator - (int a[2][2])
	{
		TDimension temp;
		for(int i=0; i<2; i++)
			for(int j=0; j<2; j++)
				temp.a[i][j] = this->a[i][j] - a[i][j];
		
		return temp;
	}
	void show()
	{
		for(int i=0; i<2; i++)
		{
			for(int j=0; j<2; j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
};

int main()
{
	/*
	 ����1
	*/ 
	cout<<"***����1������***"<<endl; 
	Rect rect(10, 20);
	rect.show();
	Circle circle(10);
	circle.show();
	Point *point = new Rect(10,20);
	point->show();
	
	/*
	 ����2 
	*/
	cout<<"***����2������***"<<endl; 
	Container *container = new Sphere(10);
	container->show();
	container = new Cylinder(10,10);
	container->show();
	container = new Cube(10);
	container->show();
	
	/*
	 ����3 
	*/
	cout<<"***����3������***"<<endl; 
	ShapeT *shapes[3];
	shapes[0] = new CircleT(10);
	shapes[1] = new RectangleT(10, 20);
	shapes[2] = new TriangleT(1, 2, 3);
	int allArea = 0;
	for(int i=0; i<3; i++)
	{
		allArea += shapes[i]->area();
	}
	cout<<"����ܺ�Ϊ"<<allArea<<endl;
	
	/*
	 ����4 
	*/
	cout<<"***����4������***"<<endl; 
	ShapeF *shapez[3];
	shapez[0] = new CylinderF(1,10);
	shapez[1] = new CubeF(10);
	shapez[2] = new SphereF(3);
	for(int i=0; i<3; i++)
	{
		cout<<shapez[i]->volumn()<<endl;
	}
	
	/*
	 ����5 
	*/
	cout<<"***����5������***"<<endl; 
	int arr[2][2] = {{1,2},{3,4}};
	TDimension a(arr);
	cout<<"�������ά�����ֵ���ÿո����:";
	int arr2[2][2];
	for(int i=0; i<2; i++)
		for(int j=0; j<2; j++)
			cin>>arr2[i][j];
	
	TDimension res = a + arr2;
	TDimension res2 = a - arr2;
			
	cout<<"��һ������ֵΪ{{1,2},{3,4}}����ӽ��Ϊ��"<<endl;
	res.show();
	cout<<"��һ������ֵΪ{{1,2},{3,4}}��������Ϊ��"<<endl;
	res2.show();
	
	return 0;
}
 
