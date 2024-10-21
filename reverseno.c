#include<stdio.h>
#include<math.h>

int main(){
    int p,n,i=0,k=0,j=0,s;
    printf("Enter the number to be reversed\n");
    scanf("%d",&n);
    s=n;
    while(n>=1){
        n /= 10;
        i++;
    }
    while(j<=(i+1)){
      p=s%10;
      s /= 10;
      k+=p*(pow(10,i-j-1));
      j++;
    }

    printf("%d",k);
    return 0;
}