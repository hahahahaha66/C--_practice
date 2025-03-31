//静态成员是指用static修饰的变量 作用域是类内 生命周期是整个程序
//通常类内声明 类外初始化 属于类 所有对象共享
//静态函数只能访问静态成员变量 但普通函数也能访问静态成员变量
#include <iostream>
using namespace std;
class maker{
public:
maker (){
    cout<<"构造函数"<<endl;
}
~maker(){
    cout<<"析构函数"<<endl;
}
static int a;
};
int maker::a=10;