#include <cstddef>
#include <iostream>
#include <string.h>
using namespace std;
class MyString{
    friend ostream &operator<<(ostream &out,MyString&str);
    friend istream &operator>>(istream &in,MyString&str);
    public:
    MyString(){
        this->p=new char[1];
        this->p[0]='\0';
        this->size=0;
    }
    MyString(char a,int num){
        this->p=new char [num+1];
        for(int i=0;i<num;i++){
            this->p[i]=a;
        }
        this->p[num]='\0';
        this->size=num;
    }
    MyString(const MyString & str){
        this->p=new char [str.size+1];
        strcpy(this->p,str.p);
        this->size=str.size;
    }
    MyString &operator=(const MyString &str){ 
        if(this->p!=NULL){
            delete [] this->p;
            this->p=NULL;
        }
        this->p=new char[strlen(str.p)+1];
        memset(this->p,0,strlen(str.p)+1);
        strcpy(this->p,str.p);
        this->size=strlen(str.p);
        return *this;
    }
    MyString operator+(const MyString&str){
        MyString result;
        result.p=new char[this->size+str.size+1];
        strcpy(result.p,this->p);
        strcat(result.p,str.p);
        result.size=this->size+str.size;
        return result;
    }
    ~MyString(){
        if(this->p!=NULL){
            delete [] this->p;
            this->p=NULL;
        }
    }
    private:
    char * p;
    int size;
};
ostream &operator<<(ostream &out,MyString&str){
    out<<str.p;
    return out;
}
istream &operator>>(istream &in,MyString&str){
    char temp[1024]={0};
    cin>>temp;
    if(str.p!=NULL){
        delete [] str.p;
        str.p=NULL;
    }
    str.p=new char [strlen(temp)+1];
    memset(str.p,0,strlen(temp+1));
    str.size=strlen(temp);
    return in;
}
void test(){
    MyString m('c',10);
    MyString n;
    n=m;
    cout<<n<<endl;
    n=n+m;
    cout<<m<<endl;
    cout<<n<<endl;
}
int main(){
    test();
    return 0;
}