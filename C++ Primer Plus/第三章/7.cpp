#include<iostream>
using namespace std;
int main(){
    double l_km;
    double g_mile;
    cout<<"enter l_km:";
    cin>>l_km;
    g_mile=l_km/3.875/62.14;
    g_mile=1/g_mile;
    cout<<"the g_mile:"<<g_mile<<endl;
    return 0;
}