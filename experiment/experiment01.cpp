/*
����1����дһ��C++���ĳ����ö�̬����ռ�ķ�������Fibonacci���е�ǰ20��洢����̬����Ŀռ��С�

����2������һ��ʱ����Time�����ṩ��������ʱ���֡�����ɵ�ʱ�䣬����дӦ�ó��򣬶���ʱ���������ʱ�䣬
����ö����ṩ��ʱ�䡣

����3����new����һ����̬һά���飬����ʼ��int[10]={1,2,3,4,5,6,7,8,9,10},��ָ��������������������ռ�ռ䡣

����4����дһ��C++���ĳ��򣬽����Ǯ���⣺��һԪ����Ҷһ���1��2��5�ֵ�Ӳ�ң��ж����ֻ�����

����5����дһ��C++���ĳ����������������������ǰ���С�����˳�������Ҫ��ʹ�ñ��������á�
*/ 
#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void setTime(int hour, int minute, int second);
    void show(){
        cout<< hour<< ":"<< minute<< ":"<< second<< endl;
    }
};

void Time::setTime(int hour, int minute, int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void compare(int &a, int &b){
    if(a>b){
        int c = a;
        a = b;
        b = c;
    }
}

int main(){
    /*
     * ����һ
     */
    int *Fibonacci = new int[20];
    Fibonacci[0]=1;
    Fibonacci[1]=1;

    for(int i=2;i<20;i++){
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }
    for(int i=0;i<20;i++){
        cout << Fibonacci[i];
        if(i!=19){
            cout << "-";
        }else{
            cout << endl;
        }
    }

    delete Fibonacci;

    /*
     * ����� 
     */
    Time *object = new Time;
    object->setTime(23, 59, 36);
    object->show();

    delete object;

    /*
     * ������ 
     */
    int *arr = new int[10]{1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    delete arr;

    /*
     *  ������ 
     */
    for(int one_cent_num=0; one_cent_num<=100; one_cent_num++){
        for(int two_cent_num=0; two_cent_num<=50; two_cent_num++){
            for(int five_cent_num=0; five_cent_num<=20; five_cent_num++){
                if(one_cent_num + two_cent_num*2 + five_cent_num*5 == 100){
                    cout<<"the number of one cent:"<< one_cent_num;
                    cout<<",the number of two cent:"<< two_cent_num;
                    cout<<",the number of five cent:"<< five_cent_num;
                    cout<<endl;
                }
            }
        }
    }

    /*
     * ������ 
     */
    int a, b;
    cout<<endl<<endl<<"pleace input two number:";
    cin>>a>>b;

    compare(a,b);
    cout<<a<<" "<<b;

    return 0;

}

