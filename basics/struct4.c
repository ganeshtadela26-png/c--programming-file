#include <stdio.h>
struct high{
    int id;
    char name[100];
    int salary;
};
int main(){
    struct high s[3];
    for(int i=0;i<3;i++){
        scanf("%d",&s[i].id);
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].salary);
        
    }
    int max=1;
    for(int j=0;j<3;j++){
        if(s[j].salary>max){
            max=s[j].salary;
        }
    }    
    for(int n=0;n<3;n++){
        if(max==s[n].salary){
            printf("%s",s[n].name);
        }
    }
return 0;
}
//if you can directly compare index it will be easy