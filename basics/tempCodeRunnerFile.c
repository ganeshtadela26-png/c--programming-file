#include<stdio.h>
int main(){
    FILE *f1,*f2;
    FILE *f3;
    char ch;
    f1=fopen("marks.txt","r");
    f2=fopen("input.txt","r");