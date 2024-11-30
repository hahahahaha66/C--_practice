#include<iostream>
using namespace std;
//在C语言中，宏函数是运行速度比较快的函数，但受到多种限制
//在C++中，提供了一种内联函数，来提高一些常用函数的访问速度
inline int add (int a,int b){
    return a+b;
}
//在函数前加上inline,编译器会选择性把他加入到内联函数，
//同时如果不加inline,编译器也可能会把常用函数变成内联函数
//通常什么样的函数会成为内联函数
//1.不存在过多的条件判断语句
//2.函数体较小
//3.没有对函数进行取址操作