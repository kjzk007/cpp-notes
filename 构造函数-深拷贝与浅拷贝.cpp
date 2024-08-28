#include <iostream>
#include <string>
using namespace std;

/*
 赋值或拷贝构造是出浅拷贝，项目中划出一个新的堆作为拷贝是深拷贝
 */


class Person{
public:
    Person(){}
    Person(int age,int height){
        cout<<"调用1"<<endl;
        Mage=age;
        Mheight=new int(height);
        // second 这个指针指向一个堆（new int），里面保存height的值
        cout<<"年龄"<<age<<"身高"<<height<<endl;
    }
    Person(const Person &p){
        //拷贝构造函数
        cout<<"拷贝调用1"<<endl;
        Mage=p.Mage;
        Mheight=new int(*p.Mheight);
        //third 拿到从p拷贝出来的Mheight里面保存的【存有height值】的堆
        //再用*解引用获得值，并且再把它存入新的堆
        //forth 用Mheight指针指向这个新堆
        cout<<"年龄"<<Mage<<"身高"<<*Mheight<<endl;//解引用取到值
    }
    ~Person(){
        cout<<"析构"<<endl;
        if(Mheight!=NULL){
            delete Mheight;//删除指针指向的堆以释放内存
            cout<<"已删"<<endl ;
        }
    }
public:
    int Mage;
    int *Mheight;//first 先定义一个指针
};

int main()
{
    Person p(12,160);
    Person p2(p);
}