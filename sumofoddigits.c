#include<stdio.h>

int main(){
    int n,p=0,i=1,q=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>=1){  
        p+=n%10;
        n /= 10;
        q+=n%10;
        n /= 10;
    }
    printf("%d",p-q);

    return 0;
}