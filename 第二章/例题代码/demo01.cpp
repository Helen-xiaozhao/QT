//��Ա(Person)�༰�������Ա��(Employee)�Ķ��弰ʹ��
#include<iostream>
#include<cstring>

using namespace std;

class Person
{
private: 
	char m_strName[10]; //����  
	int m_nAge;  //���� 
	int m_nSex;  //�Ա� 
protected:
	void Register(char *name, int age, char sex)
	{
		strcpy(m_strName, name);
		m_nAge = age;
		m_nSex = (sex=='m'?0:1);
	}
public:
	void GetName(char *name){
		strcpy(name, m_strName);
	}
	char GetSex(){
		return m_nSex==0?'m':'f';
	}
	int GetAge(){
		return m_nAge;
	}
	void ShowMe(){
		char name[15];
		GetName(name);
		cout<<name<<"\t"<<GetSex()<<"\t"<<GetAge()<<"\t";
	}
};

class Employee: public Person
{
private:	
	char m_strDept[20]; //�������� 
	float m_fSalary;  //��н 
public:
	Employee(){
		Register("xxx", 0, 'm', "xxx", 0);
	}	
	void Register(char* name, int age, char sex, char* dept, float salary);
	void ShowMe();
};

void Employee::Register(char* name, int age, char sex, char* dept, float salary)
{
	Person::Register(name, age, sex);
	strcpy(m_strDept, dept);
	m_fSalary = salary;
}

void Employee::ShowMe()
{
	char name[15];
	GetName(name);
	cout<<name<<"\t"<<GetSex()<<"\t"<<GetAge()<<"\t";
	cout<<m_strDept<<"\t"<<m_fSalary<<endl;
}

int main()
{
	Employee emp;
	emp.ShowMe();
	emp.Register("ddu", 40, 'f', "ͼ���", 2000);
	emp.ShowMe();
	cout<<"���û���GetAge()����ֵΪ��"<<emp.GetAge()<<endl;
	return 0;
}
