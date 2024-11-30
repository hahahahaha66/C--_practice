#include<iostream>
#include<string>
using namespace std;
class student
{
public:
void get_name(string Name){
    name=Name;
}
void get_node(int S_node){
    s_node=S_node;
}
void printf_name(){
    cout<<"姓名:"<<name<<endl;
}
void printf_node(){
    cout<<"学号:"<<s_node<<endl;
}
public:
    string name;
    int s_node;
};
int main(){
    student a;
    a.get_name("hahaha");
    a.get_node(1);
    a.printf_name();
    a.printf_node();
}