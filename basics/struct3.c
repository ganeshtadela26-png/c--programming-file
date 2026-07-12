#include<stdio.h>
typedef struct complex {
    int i;
    int r; 
}com;
int main(){
    com f,s;
    scanf("%d%d",&f.i,&f.r);
    scanf("%d%d",&s.i,&s.r);
    int real=(f.r+s.r);
    int ima=(f.i+s.i);
    printf("%d+%di",real,ima);
    return 0;
    
}
