#include <iostream>

using namespace std;

class cls{
public:
    //Ч��1���βκͳ�Ա����ͬ����thisָ������
    cls(int age){
        this->age=age;//this��һ��ָ�룬ָ�������ö���
        //obj1��cls��Ķ���thisָ��obj1�� int age
        cout<<age<<endl;
    }
    //Ч��2��
    cls& Add(cls p)//��obj1������������Ϊp
    {
        this->age+=p.age;//this->age�ǵ��õĶ����age
        //p.age�Ǵ�������obj1��age
        return *this;//this��һ��ָ�������ö����ָ�룬�����÷��ص��Ǳ���
        //��Ϊ��ָ����ʽ���أ�������Ҫ(&)������
        //���ص��Ǳ���(obj2)��������Ҫд�϶������,����cls&=cls obj2
        //��Ȼ��󷵻ص���cls�Ķ�����ô��Ȼ�Ϳ����ٴε���Add����
    }
    int age;//��ʵ���������Ƕ����age
};

void test(){
    cls obj1(1);
    cls obj2(10);//����һ���µĶ���
    obj2.Add(obj1).Add(obj1).Add(obj1);//��ʽ���
    cout<<"��ʽ��̵Ľ���� "<<obj2.age<<endl;

    //����ʹ��ѭ���ķ�ʽ
    for(int i;i<10;i++){
    obj2.Add(obj1);
    }
    cout<<"ѭ���Ľ���� "<<obj2.age<<endl;

}
int main()
{
test();
}