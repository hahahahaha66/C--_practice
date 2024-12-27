#include<iostream>
//c++的堆区空间需要使用new和delete来申请和释放
//使用原本的malloc并不会调用类里面的构造和析构函数
using namespace std;
class Maker{
    public:
    Maker(){
        cout<<"无参构造";
        a=0;
    }
    Maker(int n){
        a=n;
    }
    ~Maker(){
         
    }
    private:
    int a;
};
void test(){
    int *p=new int[10];
    for(int i=0;i<10;i++){
        p[i]=i+1;
        cout<<p[i]<<" ";
    }
    delete []p;
}
int main(){
    Maker* haha=new Maker;
    return 0;
}