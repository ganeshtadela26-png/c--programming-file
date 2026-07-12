#include <stdio.h>
#include<string.h>
union print
{
    int i;
    char name[89];
    float k;
};
int main(){
    union print h;
    h.i=23;
    printf("%d",h.i);
    strcpy(h.name,"ganesh");
    printf("%d",h.name);
    return 0;
    
}
