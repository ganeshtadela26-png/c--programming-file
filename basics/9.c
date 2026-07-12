#include<stdio.h>
#define MAX 12
int main(){
    FILE *f1,*f2;
    int hdd[MAX],solar[MAX];
    int month;
    float heat_loss,heat_req,floor_space,eff;
    float energy_resource,area;
    f1=fopen("hdd.txt","r");
    f2=fopen("solar.txt","r");
    if(f1==NULL||f2==NULL){
        printf("null");
    }
    else{
        for(int i=0;i<MAX;i++){
            fscanf(f1,"%d",&hdd[i]);
        }
        for(int i=0;i<MAX;i++){
            fscanf(f2,"%d",&solar[i]);
        }
        scanf("%d",&month);
        scanf("%f%f%f",&heat_req,&floor_space,&eff);
        int hday=hdd[month-1];
        int solarin=solar[month-1];
        heat_loss=heat_req*floor_space*hday;
        energy_resource=solarin*30*(eff/100);
        area=heat_loss/energy_resource;
        printf("%f",heat_loss);
        printf("%f",area);
    }
    return 0;
}