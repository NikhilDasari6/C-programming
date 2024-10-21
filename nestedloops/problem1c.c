#include<stdio.h>

int main(){
   for(int i=1;i<=4;i++){
    int k=1,p=(i-1);
    for(int j=1;j<=7;j++){
        if(j==4){
            printf("%d",i);
        }
        else if(j<4 && j>(4-i)){
            printf("%d",k);
            k++;
        }
        else if(j>4 && j<(4+i)){
            printf("%d",p);
            p--;
        }
        else{
            printf(" ");
        }
        
    }
    printf("\n");
   }
    return 0;
}      
