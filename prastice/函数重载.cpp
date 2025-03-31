#include<iostream>
using namespace std;
//函数重载是允许函数名相同，为了方便使用函数名
//通常是名字相同，参数的数量不同，顺序不同，类型不同
void func(int a){
    cout<<"func(int a)"<<endl;
}
void func(int a,double b){
    cout<<"func(int a,double b)"<<endl;
}
void func(double b,int a){
    cout<<"func(double b,int a)"<<endl;
}
//在没有匹配的参数时，编译器会尝试将参数转换，如果转换成功就调用，失败则报错
//当函数重载和默认函数一起使用时会报错
//函数返回值不作为函数重载的判断条件