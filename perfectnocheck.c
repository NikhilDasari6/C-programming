#include<stdio.h>

int main(){
    int n,i=1,p=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            p+=i;
        }
      i++;  
    }
    if(p==n){
        printf("%d is a perfect number\n",n);
    }
    else{
        printf("%d is not a perfect number\n",n);
    }
    
    
  return 0;
}