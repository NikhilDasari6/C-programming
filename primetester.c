#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int sum=0;
   for(int i=2;i<=n-1;i++){
     if(n%i==0){
        sum=sum + 1;
     }
        
    }
    if(sum==0){
        printf("the given number is a prime number\n");
    }
    else{
        printf("the given number is not a prime number\n");

    }
   
    return 0;
    
}
   