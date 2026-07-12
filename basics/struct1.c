#include<stdio.h>
struct student{
    int roll;
    char name[10];
    int marks;
};
void call(struct student s);
int main(){
    struct student s1;
    scanf("%d",&s1.roll);
    scanf("%s",s1.name);
    scanf("%d",&s1.marks);
    call(s1);
} 
void call(struct student s){
    printf("%d",s.roll);
    printf("%s",s.name);
    printf("%d",s.marks);
}   
    