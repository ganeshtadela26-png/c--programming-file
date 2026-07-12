#include<stdio.h>
#include<math.h>
int main(){
int n,c,m=0,rem,original,i,p;
scanf("%d",&n);
original=n;
c=n*n;
printf("%d",c);
while (n>0){
    m+=1;
    n=n/10;
}
printf("%d",m);
p=1;
for(i=1;i<=m;i++){
    p*=10;
}
rem=c%p;
if (rem==original){
    printf("yes");
}
else{
    printf("no");
}
return 0;
}
