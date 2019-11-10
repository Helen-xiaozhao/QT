#include<iostream>
#include<cstring>

using namespace std;

class Cellphone
{
private:
	char *brand;
	int telNum;
public:
	Cellphone(char *brand, int telNum):brand(brand), telNum(telNum){}
	void setBrand(char *brand)
	{
		strcpy(this->brand, brand);
	}
	void setTelNum(int telNum)
	{
		this->telNum = telNum;
	}
	void getBrand(char *res)
	{
		strcpy(res, brand);
	}
	int getTelNum()
	{
		return telNum;
	}
	void PickUp(int telNum)
	{
		cout<<"�ӵ�"<<telNum<<"�����ĵ绰"<<endl;
	}
	void Callsomebody(int telNum)
	{
		cout<<"���к���Ϊ"<<telNum<<"�绰"<<endl;
	}
	void show()
	{
		cout<<"���ֻ�Ʒ��Ϊ"<<brand<<",����Ϊ"<<telNum<<endl;
	} 
};

class Smartphone : public Cellphone
{
private:
	int storageCapacity, screenSize;	
public:
	Smartphone(char *brand, int telNum, int storageCapacity, int screenSize)
		:Cellphone(brand, telNum), storageCapacity(storageCapacity), screenSize(screenSize){}
	void setStorageCapacity()
	{
		this->storageCapacity = storageCapacity;
	}
	int getStorageCapacity()
	{
		return storageCapacity;
	}
	void setScreenSize()
	{
		this->screenSize = screenSize;
	}
	int getScreenSize()
	{
		return screenSize;
	}
	void PlayMusic(char *mName)
	{
		cout<<"��������"<<mName<<endl;
	}
	void show()
	{
		char res[20];
		getBrand(res);
		cout<<"���ֻ�Ʒ��Ϊ"<<res<<",����Ϊ"<<getTelNum();
		cout<<",�洢����Ϊ"<<storageCapacity<<",��Ļ��СΪ"<<screenSize<<endl;
	}
};

int main()
{
	Cellphone p1("ŵ����", 10000);
	Smartphone p2("ƻ��", 10101, 500, 300);
	
	p1.show();
	p1.Callsomebody(10101);
	
	p2.show();
	p2.PickUp(10000);
	p2.PlayMusic("�質���");
	
	return 0;
	
}

