#include<iostream>
using namespace std;
int main(){
    long long second;
    cout<<"enter the number of second:";
    cin>>second;
    cout<<endl;
    int day=second/(60*60*24);
    int hour=(second-day*(60*60*24))/(60*60);
    int minute=(second-day*(60*60*24)-hour*(60*60))/60;
    int seconds=(second-day*(60*60*24)-hour*(60*60))%60;
    cout<<second<<"seconds = "<<day<<" days "<<hour<<" hours "<<minute<<" minutes "<<seconds<<" seconds "<<endl;
    return 0;
}