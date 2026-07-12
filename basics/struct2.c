#include<stdio.h>
struct rec{
    int len;
    float bre;
};
void area(struct rec s);
int main(){
    struct rec s1;
    scanf("%d",&s1.len);
    scanf("%f",&s1.bre);
    area(s1);
    return 0;
}
void area (struct rec s){
float ar=(s.len)*(s.bre);
printf("%.2f",ar);
}

