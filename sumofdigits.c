#include<stdio.h>

int main(){
    int n,p,sum=0;
    printf("Enter a Number to find its sum of digits\n");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    while(n>=1){
      p=n%10;
      n /= 10;
      sum=sum + p;

    }
    printf("%d",sum);
   
   
  
   return 0;

}