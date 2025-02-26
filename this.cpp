//在类内，对象成员和类内代码是分开的 
//c++通过this指针来区分不同的对象成员的数据
//this指针永远指向当前的对象 也就是对象指针
#include <iostream>
using namespace std;
class maker{
public:
void haha(){
    cout<<this->a<<" "<<this->b<<endl;
}
int a=10;
int b=20;
};
int main(){
    maker m;
    m.haha();
    return 0;
}