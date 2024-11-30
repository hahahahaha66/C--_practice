#include<iostream>
#include<string>
using namespace std;
class Maker
{
public:
void init(){
    name="hahaha";
    age=1;
}
void set_name(string Name){
    name=Name;
}
void get_name(){
    cout<<"name:"<<name<<endl;
}
void set_age(int Age){
    if(Age>0&&Age<100){
        age=Age;
    }
    else{
        cout<<"数据错误"<<endl;
    }
}
void get_age(){
    cout<<"age:"<<age<<endl;
}
private:
string name;
int age;
};
int main(){
    Maker a;
    a.init();
    a.get_name();
    a.get_age();
}