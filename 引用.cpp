#include<iostream>
using namespace std;
//引用类似于指针，对地址进行操作
void func(){
    int a=0;//定义一个变量
    int &b=a;//引用，将a的地址取名为b
}
//注意 引用类似于常量，在定义时必须初始化，并且在指定了一块地址后不能改变，但可以改变地址的内容
//且空间要合法，确保有访问的权限

//数组的引用
int main(){
    int arr[]={1,2,3,4,5};
    //方法一
    typedef int MY_ARR[5];
    MY_ARR &arref1=arr;
    //方法二
    int (&arrf2)[5]=arr;
    //方法三
    typedef int (&MY_ARR3)[5];
    MY_ARR3 arrf3=arr;
}

//指针的引用
void test1(){
    char a='a';
    char*p=&a;
    char*&p1=p;
}
//同理，给指针所在的的地址取名

//引用作为函数的参数
void fun(int &a,int &b){
    int sum=a+b;
    cout<<"sum = "<<sum<<endl;
}
void test2(){
    int a=10;
    int b=20;
    fun(a,b);
}

//引用作为函数的返回值
int func1(){
    int b=10;
    int &p=b;
    return p;//注意，不能返回局部变量
}
int &func2(){
    static int b=20;//可以返回全局变量和静态变量
    int &p=b;
    return p;
}
void test3(){
    cout<<"func2 = "<<func2()<<endl;
    func2()=100;//如果函数要当左值，则该函数必须返回引用
    cout<<"func2 = "<<func2()<<endl;
}