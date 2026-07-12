#include<stdio.h>
int main(){
    char d;
    printf("enter your letter in samll case:");
    scanf("%c",&d);
    switch (d){
        case 'a':
        printf("vowel");
        break;
        case 'e':
        printf("vowel");
        break;
        case 'i':
        printf("vowel");
        break;
        case 'o':
        printf("vowel");
        break;
        case 'u':
        printf("vowel");
        break;
        default:
        printf("consonant");

    }
return 0;
}