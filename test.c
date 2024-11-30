#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int repeatedSubstringPattern(char* s) {
    int m,n;
    int len=strlen(s);
    int *arr=(int *)malloc(sizeof(int)*len);
    arr[0]=0;
    for(m=1,n=0;m<len;m++){
        while(n>0&&s[m]!=s[n]){
            n = arr[n - 1];
        }
        if(s[m]==s[n]){
            n++;
        }
        arr[m]=n;
    }
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int a=0;
    if(arr[len-1]){
        a=len%(len-arr[len-1])==0?1:0;
    }
    free(arr);
    return a;
}
int main(){
    char s[]={"abac"};
    int a=repeatedSubstringPattern(s);
    printf("%d\n",a);
    return 0;
}