#include <iostream>
#include <string>
#include <vector>
using namespace std;

class person{
public:
    person(string name, int age){
        this->Mname = name;
        this->Mage = age;
    }
    string Mname;
    int Mage;

};
void func(){
vector<person*> v;//��*��ʾָ�����͵�����
    person p1("aa",10);
    person p2("bb",20);
    person p3("cc",30);
    v.push_back(&p1);//ָ��ָ�����ĵ�ַ
    v.push_back(&p2);
    v.push_back(&p3);
    for(vector<person*>::iterator it = v.begin();it!=v.end();it++){
        cout<<"���֣� "<<(*it)->Mname<<" ���䣺 "<<(*it)->Mage<<endl;
                    //������������Ա���Ϊһ��ָ��
                    //���԰�it������ȡ��it��ָ��Ķ�������->Mnamȡ����Ҫ������
    }
}

int main() {
func();
}