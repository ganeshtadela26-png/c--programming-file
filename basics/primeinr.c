#include<stdio.h>
int main(){
    int t,n;
    printf("enter no of test cases:");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int s=0;
        for(int m=1;m<=n;m++){
            int c=0;
            for(int j=1;j<=m;j++){
                if(m%j==0)
                c+=1;
            }
            if(c==2)
            s+=m;
        }
        printf("sum is%d",s);
    }
    return 0;
}