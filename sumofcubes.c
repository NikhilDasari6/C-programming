#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum + pow(i,3);

    }
    printf("%d",sum);
    return 0;
}
   