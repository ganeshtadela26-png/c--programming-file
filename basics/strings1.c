#include<stdio.h>
int main(){
    int arr[40]={1,2,3,4,3,6};
    int c=0;
    for(int i=0;arr[i]!='\0';i++){
        c=c+1;
    }
    printf("%d",c);
    return 0;
}