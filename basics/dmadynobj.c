#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    int roll;
    char a[9];
}g;
int main(){
    g *p;
    p=(g*)malloc(sizeof(g));
    p->roll=54;
    strcpy(p->a,"ganesh");
    printf("%s",p->a);
    printf("%d",p->roll);
    free(p);
    return 0;
}