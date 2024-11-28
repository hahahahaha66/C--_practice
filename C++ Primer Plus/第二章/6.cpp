#include<iostream>
using namespace std;
double haha(double a){
    return a*63240;
}
int main(){
    double a;
    cout<<"请输入光年值"<<endl;
    cin>>a;
    cout<<a<<"光年 = "<<haha(a)<<"天文单位"<<endl;
    return 0;
}