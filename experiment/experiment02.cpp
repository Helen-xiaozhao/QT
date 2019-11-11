#include<iostream>
#include<string.h>

using namespace std;

/* ����1 */
int max(int x, int y)
{
	return x>y?x:y;
}

int max(int x, int y, int z)
{
	int temp = x>y?x:y;
	return temp>z?temp:z;
}

float max(float x, float y)
{
	return x>y?x:y;
}

float max(float x, float y, float z)
{
	double temp = x>y?x:y;
	return temp>z?temp:z;
}

/* ����2 */ 
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour, int minute, int second)
    {
    	this->hour = hour;
		this->minute = minute;
		this->second = second;	
    }
    
	void Print_Time()
	{
        cout<< hour<< ":"<< minute<< ":"<< second<< endl;
    }
};

/* ����3 */
class Cylinder
{
private:
	double vol;

public:
	Cylinder(double r, double h)
	{
		this->vol = 3.14*r*r*h;
	}	
	
	~Cylinder()
	{
		cout<<"deconstrucor of Cylinder"<<endl;
	}
	
	void Print_vol()
	{
        cout<<"Բ�����Ϊ��"<< vol << endl;
    }
}; 

/* ����4 */
class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date(){}
	
	Date(int year, int month, int day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	
	void Print_Date()
	{
        cout<< year<< "/"<< month<< "/"<< day<< endl;
    }
};

/* ����5 */
class Employee
{
private:
	char name[20];
	char addr[40];
	char city[20];
	char state[20];
	char zip[10];
	
public:
	Employee(char* name, char* addr, char* city, char* state, char* zip);

	void ChangeName(char* name)
	{
		strcpy(this->name, name);
	}
	
	void Display()
	{
		cout<<"����Ϊ "<<name<<endl;
		cout<<"��ַΪ "<<addr<<endl;
		cout<<"����Ϊ "<<city<<endl;
		cout<<"ʡΪ "<<state<<endl;
		cout<<"��������Ϊ "<<zip<<endl;
	}
	
};

Employee::Employee(char* name, char* addr, char* city, char* state, char* zip)
{
	strcpy(this->name, name);
	strcpy(this->addr, addr);
	strcpy(this->city, city);
	strcpy(this->state, state);
	strcpy(this->zip, zip);
}

int main()
{

	/* ����1 */ 
	
	int a, b, c;
	float d, e, f;
	cout<<"��������������";
	cin>>a>>b;
	cout<<"���ֵΪ��"<<max(a,b)<<endl; 
	
	cout<<"��������������";
	cin>>a>>b>>c;
	cout<<"���ֵΪ��"<<max(a,b,c)<<endl; 
	
	cout<<"������������������";
	cin>>d>>e;
	cout<<"���ֵΪ��"<<max(d,e)<<endl; 
	
	cout<<"������������������";
	cin>>d>>e>>f;
	cout<<"���ֵΪ��"<<max(d,e,f)<<endl; 
		
		
	/* ����2 */ 
	Time time = Time(12,30,45);
	time.Print_Time();
	
	/* ����3 */
	Cylinder cylinder = Cylinder(3,5);
	cylinder.Print_vol();

	
	/* ����4 */ 
	Date date = Date(2019,10,9);
	date.Print_Date();
	
	/* ����5 */ 
	char name[20] = "����";
	char addr[40] = "������";
	char city[20] = "�麣��";
	char state[20] = "�㶫ʡ";
	char zip[10] = "518000";
	
	Employee employee = Employee(name, addr, city, state, zip);
	employee.Display();

	
	return 0;
}
