#include<stdio.h>
int main (){
    float arr[]={1,2,3,4,5,6};
    float sum=0,avg;
    for (int i=0;i<6;i++){
        sum=sum+arr[i];
    }
    avg=sum/6;
    printf("%.2f",avg);
    return 0;
}
