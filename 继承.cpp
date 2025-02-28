#include <iostream>
using namespace std;
class Father{
    public:
    void test(){
        cout<<"哈哈哈"<<endl;
    }
    private:
    int money;
};
class Son1:public Father{
    public:
    void test(){
        cout<<"呵呵呵"<<endl;
    }
    private:
    int thinking;
};
//共有继承
//父类的成员到子类不发生改变
//父类的私有属性成员到子类仍然不能访问
class Son2:protected Father{
    public:
    void test(){
        cout<<"呵呵呵"<<endl;
    }
    private:
    int thinking;
};
//保护继承
//父类的共有属性成员到子类变成保护
//其他不变
class Son3:private Father{
    void test(){
        cout<<"呵呵呵"<<endl;
    }
    private:
    int thinking;
};
//私有继承
//父类的共有属性成员到子类变成私有
//其他不变
void test(){
    Father f;
    Son1 s;
    f.test();
    s.test();
}
//当一个类通过多重继承从两个类继承同一基类时，可能会导致不确定性或冲突的问题
//这时候采用虚拟继承
class A{
    void test(){
        cout<<"class a"<<endl;
    }
};
class B: virtual public A{
    void test(){
        cout<<"class b"<<endl;
    }
};

class C :virtual public A{
    void test(){
        cout<<"class c"<<endl;
    }
};
class D:public B, public C{
    void test(){
        cout<<"class a"<<endl;
    }
};
//使用了虚拟继承后，编译器会生成对应的指针，两个指针同时指向一块区域，避免了二义性
