#include<stdio.h>
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9,i,x;
    for (i=0;i<n/2;i++){
        *(arr+n-1)=x;
        *(arr+n-1)=*(arr+i);
        *(arr+i)=x;
    }
    printf("%d",*arr);
    
}