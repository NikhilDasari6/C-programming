#include<stdio.h>

int main(){
    int n;
    printf("enter a number to find its factorial\n");
    scanf("%d",&n);
    double product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    printf("%f",product);
    return 0;

}