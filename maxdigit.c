#include<stdio.h>


int main(){
    int n,p,max;
    printf("Enter the number\n");
    scanf("%d",&n);
    max=n%10;
    while(n>=1){
        p=n%10;
        n /= 10;
        if(p>max){
            max=p;
        }
        
    }
    printf("%d",max);
    return 0;
}