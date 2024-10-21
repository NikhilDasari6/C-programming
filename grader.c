#include <stdio.h>

int main(){
    int a;

    printf("Enter your marks:\n");
    scanf("%d",&a);
    if((a<100)&&(a>90)){
        printf("Your grade is 10\n");
    }
    else if((a<90)&&(a>80)){
        printf("Your grade is 9\n");
    }
    else if((a<80)&&(a>70)){
        printf("Your grade is 8\n ");
    }
    else if(a<70){
        printf("You are failed\n");
    }
    else{
        printf("no marks possible\n");

     }   
    

    return 0;
}