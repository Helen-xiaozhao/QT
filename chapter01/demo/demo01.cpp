#include<iostream>
#include<cstring>

using namespace std;

class Account
{
private:
	int ID; //�˻�ID 
	char Name[20]; //���� 
	float balance; //��� 
public:
	void Initial(int ID, char Name[], float balance); //��ʼ�� 
	int withdraw(float m);  //ȡǮ 
	void deposits(float m); //��Ǯ 
	void showMe(){
		cout<<Name<<" "<<balance<<endl;
	}
};

void Account::Initial(int ID, char Name[], float balance)
{
	this->ID = ID;
	strcpy(this->Name, Name);
	this->balance = balance;
}

int Account::withdraw(float m)
{
	if(balance>m){
		balance = balance - m;
		return 1;
	}else
		return 0;
}

void Account::deposits(float m)
{
	balance = balance + m;
}

int main()
{
	Account my, other;
	char name[] = "Jack";
	my.Initial(10112, name, 600.0);
	my.showMe();
	my.withdraw(500.0);
	my.showMe();
	
	//cout<<my.Name<<" "<<my.balance<<endl; error
	//other.balance = 300; error
	//other.ID = 20112; error
	
	return 0;
}
