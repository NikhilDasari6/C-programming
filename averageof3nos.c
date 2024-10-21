#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter three numbers :");
    scanf("%d%d%d" ,&a,&b,&c);
    
    int sum = a + b + c;
    printf("%f" , sum / 3.0);
    return 0;

}