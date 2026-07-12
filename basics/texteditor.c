#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[100],sub[100],temp[100];
    char ch;
    int pos;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]=0;
    printf("enter char:");
    // scanf("%c",ch);
    while(1){
        scanf("%c",&ch);
        if(ch=='q'||ch=='Q'){
            printf("quit");
            break;
        }
        else if(ch=='d'||ch=='D'){
            scanf("%s",sub);
            char *p=strstr(str,sub);
            if(p!=NULL){
                strcpy(p,p+strlen(sub));
                printf("%s",str);
            }
            else{
            printf("not");}
        }
        else if(ch=='i'||ch=='I'){
            printf("enter pos");
            scanf("%d",&pos);
            scanf("%s",sub);
            strncpy(temp,str,pos);
            temp[pos]='\0';
            strcat(temp,sub);
            strcat(temp,str+pos);
            strcpy(str,temp);
            printf("%s",str);
        }
        else if(ch=='f'||ch=='F'){
            scanf("%s",sub);
            char* p=strstr(str,sub);
            if(p!=NULL){
                printf("found at %ld",p-str);
            }
            else{
                printf("not found");
            }

        }
        else{
            printf("invalid ip");
        }
    }
    return 0;
}