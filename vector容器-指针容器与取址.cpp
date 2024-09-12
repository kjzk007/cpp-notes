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
vector<person*> v;//加*表示指针类型的容器
    person p1("aa",10);
    person p2("bb",20);
    person p3("cc",30);
    v.push_back(&p1);//指针指向对象的地址
    v.push_back(&p2);
    v.push_back(&p3);
    for(vector<person*>::iterator it = v.begin();it!=v.end();it++){
        cout<<"名字： "<<(*it)->Mname<<" 年龄： "<<(*it)->Mage<<endl;
                    //迭代器本身可以被视为一个指针
                    //所以把it解引用取到it所指向的对象本体再->Mnam取得想要的数据
    }
}

int main() {
func();
}