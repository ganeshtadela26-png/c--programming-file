#include<stdio.h>
int check(int *p,int n);
int main(){
    int arr[]={1,3,45,6,67,7};
    check(arr,6);

}
int check(int *p,int n){
    int max=1;
    for (int i=0;i<n;i++){
        if (*(p+i)>max){
            max=*(p+i);
        }
    }
    printf("max=%d",max);
}