#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int i=0;
    while(i<=a){
        printf("%d\n",i);
        i++;
    }
    return 0;
}