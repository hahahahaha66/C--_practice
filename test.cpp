#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float max=0;
    float min=10000;
    float count=0;
    for(int i=0;i<n;i++){
        count+=arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"average = "<<fixed<<setprecision(2)<<count/n<<endl;
    cout<<"max = "<<fixed<<setprecision(2)<<max<<endl;
    cout<<"min = "<<fixed<<setprecision(2)<<min<<endl;
    delete[] arr;
    return 0;
}