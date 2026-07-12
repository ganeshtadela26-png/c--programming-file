#include<stdio.h>
int main(){
    FILE *f1,*f2;
    FILE *f3;
    char ch;
    f1=fopen("marks.txt","r");
    f2=fopen("input.txt","r");
    f3=fopen("dest.txt","w");
    if(f1==NULL||f2==NULL||f3==NULL){
       printf("invalid");
    }
    while((ch=fgetc(f1))!=EOF){
       fputc(ch,f3);
    }
    fputc(' ',f3);
    while((ch=fgetc(f2))!=EOF){
        fputc(ch,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}