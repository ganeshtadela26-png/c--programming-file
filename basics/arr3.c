#include<stdio.h>
int main(){
    int arr[]={1,23,4,56,7,7,1,23};
    int c=0;
    for (int i=0;i<8;i++){
        c=0;
        for (int j=1;j<8;j++){
            if (arr[i]==arr[j]){
                c+=1;
            }
        }
        printf("the element: %d repeats: %d times\n",arr[i],c);
    }
}