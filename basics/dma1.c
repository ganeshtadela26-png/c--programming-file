#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(5*sizeof(int));
    // *p=25;
    // printf("%d\n",*p);
    // free(p);
    // printf("%d",*p);
    for(int i=0;i<5;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    free(p);
    p=NULL;
    for(int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}