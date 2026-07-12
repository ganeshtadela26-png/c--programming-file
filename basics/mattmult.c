#include<stdio.h>
int main(){
    int i,j,p;
    scanf("%d%d%d",&i,&j,&p);
    int a[i][j];
    int b[j][p];
    int mult[i][p];
    for(int m=0;m<i;m++){
        for(int n=0;n<j;n++){
            scanf("%d",&a[m][n]);

        }
    }
    for(int m=0;m<j;m++){
        for(int n=0;n<p;n++){
            scanf("%d",&b[m][n]);

        }
    }
    for(int m=0;m<i;m++){
        for(int n=0;n<p;n++){
            mult[m][n]=0;
        }
    }
    for(int m=0;m<i;m++){
        for(int n=0;n<p;n++){
            for(int k=0;k<j;k++){
                mult[m][n]+=a[m][k] * (b[k][n]);
            }  
        }
    }
    for(int m=0;m<i;m++){
        for(int n=0;n<p;n++){
            printf("%d ",mult[m][n]);
        }
        printf("\n");
    }
    return 0;
    
}