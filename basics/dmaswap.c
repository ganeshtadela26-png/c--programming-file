#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p1,*p2;
    p1=(int*)malloc(sizeof(int));
    p2=(int*)malloc(sizeof(int));
    scanf("%d",p1);
    scanf("%d",p2);
    int temp=0;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d\n",*p1);
    printf("%d",*p2);
    return 0;
}