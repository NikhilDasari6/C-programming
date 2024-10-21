#include<stdio.h>
#include<math.h>



int main(){
  int n,p,sum=0,s;
  printf("Enter a number\n");
  scanf("%d",&n);
  s=n;
  while(n>=1){
    p=n%10;
    sum+=(p*p*p);
    printf("%d\n",sum);
    n/=10;
    
  }

  if(sum==s){
    printf("the entered number is a an armstrong number\n");

  }
 else{
  printf("Entered number is not an armstrong number\n");
 }



  return 0;

}

