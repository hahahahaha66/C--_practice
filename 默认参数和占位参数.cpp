#include<iostream>
using namespace std;
//在函数的参数中，可以对参数进行赋值，使成为默认参数
void func(int a,int b=10){
    cout<<a+b<<endl;
}
//在传参时，如果未传参数b,则默认b的大小为10
//一个函数可以有多个默认参数，但注意默认参数后面必须都是默认参数,即默认参数放在最后
void func2 (int a,int b=10,int c=20){
    cout<<a+b+c<<endl;
}
//占位参数
void func2(int a,int){
    cout<<a<<endl;
}
//也可以初始化
void func3(int a,int=10){
    cout<<a<<endl;
}