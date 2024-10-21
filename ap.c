#include<stdio.h>

int main(){
    int a,n,d;
    printf("enter a,n,d of a progression\n");
    scanf("%d%d%d",&a,&n,&d);
    for(int i=a;i<=a+(n*d);i=i+d){
        printf("%d\n",i);
    }
    return 0;
}