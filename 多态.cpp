#include <iostream>
using namespace std;
//多态发生的条件
//继承
//重写虚函数
//父类指针指向子类对像
class People{
    public:
    virtual void Mypro(){

    }
};
class xishi :public People{
    public:
    virtual void Mypro(){
        cout<<"xishi"<<endl;
    }
};
class wangzhaojun :public People{
    public:
    virtual void Mypro(){
        cout<<"wangzhaoju"<<endl;
    }
};
class diaochan :public People{
    public:
    virtual void Mypro(){
        cout<<"diaochan"<<endl;
    }
};
void haha(People* pro){
    pro->Mypro();
}
void test(){
    People *pro=NULL;
    pro=new xishi;
    haha(pro);
    delete pro;
    pro=new wangzhaojun;
    haha(pro);
    delete pro;
    pro=new diaochan;
    haha(pro);
    delete pro;
}
int main(){
    test();
}