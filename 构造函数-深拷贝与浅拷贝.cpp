#include <iostream>
#include <string>
using namespace std;

/*
 ��ֵ�򿽱������ǳ�ǳ��������Ŀ�л���һ���µĶ���Ϊ���������
 */


class Person{
public:
    Person(){}
    Person(int age,int height){
        cout<<"����1"<<endl;
        Mage=age;
        Mheight=new int(height);
        // second ���ָ��ָ��һ���ѣ�new int�������汣��height��ֵ
        cout<<"����"<<age<<"���"<<height<<endl;
    }
    Person(const Person &p){
        //�������캯��
        cout<<"��������1"<<endl;
        Mage=p.Mage;
        Mheight=new int(*p.Mheight);
        //third �õ���p����������Mheight���汣��ġ�����heightֵ���Ķ�
        //����*�����û��ֵ�������ٰ��������µĶ�
        //forth ��Mheightָ��ָ������¶�
        cout<<"����"<<Mage<<"���"<<*Mheight<<endl;//������ȡ��ֵ
    }
    ~Person(){
        cout<<"����"<<endl;
        if(Mheight!=NULL){
            delete Mheight;//ɾ��ָ��ָ��Ķ����ͷ��ڴ�
            cout<<"��ɾ"<<endl ;
        }
    }
public:
    int Mage;
    int *Mheight;//first �ȶ���һ��ָ��
};

int main()
{
    Person p(12,160);
    Person p2(p);
}