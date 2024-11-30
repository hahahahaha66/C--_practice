#include<iostream>
using namespace std;
int main(){
    long long world_population;
    long long us_population;
    cout<<"enter the world's population:"<<endl;
    cin>>world_population;
    cout<<"enter the population of the us:"<<endl;
    cin>>us_population;
    double percentage=static_cast<double>(us_population)/world_population*100;
    cout<<"the population of the us is "<<percentage<<"% of the world population"<<endl;
    return 0;
}