#include<stdio.h>
int fun(int *p,int n);
int main(){
    int arr[]={1,2,3,4};
    fun(arr,4);
}
int fun(int *p,int n){
    for (int i=0;i<n/2;i++){
       int x=*(p+(n-i-1));
       *(p+(n-i-1))=*(p+i);
       *(p+i)=x;
    }
    for (int i=0;i<n;i++){
    printf("%d",p[i]);
    }
return 0;
}

