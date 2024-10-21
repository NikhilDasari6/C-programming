#include<stdio.h>

int main(){
    int a[40][40],n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        sum += a[i][i];
    }
    printf("%d",sum);
    return 0;

}