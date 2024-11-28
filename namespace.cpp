#include<iostream>
//命名空间写在全局
//命名空间允许嵌套
//名名空间是开放的，随时可以加入新成员，但新成员只能在加入后使用
//命名空间的名字可以更改
namespace A{
    int a;
    void func(){

    }
}
//匿名命名空间只允许本文件访问,类似于static
namespace {
    int a;
    int b;
}
//注意在头文件不同命名空间变量同名时，需要在函数或变量名前加命名空间的名字
//test.h
{
    namespace A{
        func()
    }
    namespace B{
        func()
    }
}
//test.cpp
#include"test.h"
{
    void A::func();
}
//在函数内使用using,可以直接使用命名空间内变量，由于是外部定义的，内部可以定义同名变量