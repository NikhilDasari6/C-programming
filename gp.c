#include<stdio.h>
#include<math.h>

int main(){
    int a,r,n;
    printf("enter a,r,n of a gp \n");
    scanf("%d%d%d",&a,&r,&n);
    for(int i=a;i<=a*(pow(r,n-1));i=i*r){
        printf("%d\n",i);
    }
    return 0;



    
}