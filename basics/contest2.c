#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int m=0;m<n;m++){
        scanf("%d",&arr[m]);
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c+=1;
            }
        }
        if(c==1){
            printf("unique =%d",arr[i]);
            break;
        }
    }
    return 0;
}