#include<stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=17;j++){
            if(j==1 || j==9)
            printf("*");
            else if(j==i)
            printf("*");
            else if(j==11 || j==17)
            printf("*");
            else if(i==1 || i==9){
                if(j>11)
                printf("*");
                else
                printf(" ");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}