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

class Employee: private Person
{
private:	
	char m_strDept[20]; //�������� 
	float m_fSalary;  //��н 
public:
	Employee(){
		EmployeeRegister("xxx", 0, 'm', "xxx", 0);
	} 
	void EmployeeRegister(char* name, int age, char sex, char *dept, float salary);
	void ShowMe();
	void GetEmployeeName(char* name){
		GetName(name);
	}
	char GetEmployeeSex(){
		return GetSex();
	}
	int GetEmployeeAge(){
		return GetAge();
	}
};

void Employee::EmployeeRegister(char* name, int age, char sex, char *dept, float salary)
{
	Register(name, age, sex);
	strcpy(m_strDept, dept);
	m_fSalary = salary;
}

void Employee::ShowMe()
{
	char name[20];
	GetName(name);
	cout<<name<<"\t";
	cout<<GetAge()<<"\t";
	cout<<GetSex()<<"\t";	
	cout<<m_strDept<<"\t"<<m_fSalary<<endl;
}

int main()
{
	Employee emp;
	emp.EmployeeRegister("����", 40, 'm', "ͼ���", 2000);
	emp.ShowMe();
	char name[20];
	emp.GetEmployeeName(name);
	cout<<"����GetEmployeeName()�õ����Ϊ��"<<name<<"\n";
	cout<<"����GetEmployeeSex()�õ����Ϊ��"<<emp.GetEmployeeSex()<<"\n";
	cout<<"����GetEmployeeAge()�õ����Ϊ��"<<emp.GetEmployeeAge()<<"\n";
	
	return 0;
}
