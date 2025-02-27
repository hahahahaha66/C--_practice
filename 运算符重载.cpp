//#include <iostream>
//using namespace std;
//定义是赋予运算符另一种含义
//重载函数本质是一种编译器调用的函数调用
//不能改变运算符的优先级
class Maker{
    public:
    Maker(){
        a=10;
        b=20;
    }
    Maker (int a,int b){
        this->a=a;
        this->b=b;
    }
    //成员重载函数，只需要一个右边的参数，左边是this 
    Maker operator+(Maker &m){
        Maker result(this->a+m.a,this->b+m.b);
        return result;
    }
    public:
    int a;
    int b;
};
//全局重载函数
Maker operator+(Maker&m,Maker&n){
    Maker result(m.a+n.a,m.b+m.b);
    return result;
}