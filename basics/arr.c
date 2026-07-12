//second max in array
#include<stdio.h>
int main(){
    int arr[]={1,23,4,5,76};
    int max=1,sm=1;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d\n",max);
    for(int i=0;i<5;i++){
        if(arr[i]<max && arr[i]>sm ){
            sm=arr[i];
        }
    }
printf("%d",sm);
return 0;
}