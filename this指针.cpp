#include <iostream>

using namespace std;

class cls{
public:
    //效果1：形参和成员名相同，用this指针区分
    cls(int age){
        this->age=age;//this是一个指针，指向所调用对象
        //obj1是cls类的对象，this指向obj1的 int age
        cout<<age<<endl;
    }
    //效果2：
    cls& Add(cls p)//把obj1传进来并命名为p
    {
        this->age+=p.age;//this->age是调用的对象的age
        //p.age是传进来的obj1的age
        return *this;//this是一个指向所调用对象的指针，解引用返回的是本体
        //因为以指针形式返回，所以需要(&)来接收
        //返回的是本体(obj2)，所以需要写上对象的类,于是cls&=cls obj2
        //既然最后返回的是cls的对象，那么自然就可以再次调用Add函数
    }
    int age;//在实例化后，这是对象的age
};

void test(){
    cls obj1(1);
    cls obj2(10);//创建一个新的对象
    obj2.Add(obj1).Add(obj1).Add(obj1);//链式编程
    cout<<"链式编程的结果： "<<obj2.age<<endl;

    //可以使用循环的方式
    for(int i;i<10;i++){
    obj2.Add(obj1);
    }
    cout<<"循环的结果： "<<obj2.age<<endl;

}
int main()
{
test();
}