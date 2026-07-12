#include<stdio.h>
int main(){
    char arr[40];
    fgets(arr,40,stdin);
    for(int i=0;arr[i]!='0';i++){
        if(arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u'){
            printf("%c",arr[i]);

        }
    }
    return 0;
}