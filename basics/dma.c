#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int a=9;
    ptr=malloc(6*sizeof(int));
    printf("%d",sizeof(ptr));
    return 0;
}