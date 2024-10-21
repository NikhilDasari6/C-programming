#include<stdio.h>

int main(){
    int n;
    printf("enter an year\n");
    scanf("%d",&n);
    if(n % 4 ==0){
        printf("%d is a leap year\n",n);
    }
    else{
        printf("%d is not a leap year\n",n);
    }
    return 0;


}