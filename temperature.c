#include<stdio.h>

void centigrade(float f);
void farenheit(float c);




int main(){
    char x;
    float f,c;
    printf("press c to convert your temperature to centigrade and f for farenheait\n");
    scanf("%c",&x);
    if(x=='c'){
         printf("enter the temperature\n");
         scanf("%f",&f);
        centigrade(f);
    }
    else{
         printf("enter the temperature\n");
         scanf("%f",&c);
        farenheit(c);
    }
    return 0;
   
    
}

void centigrade(float f){
    
    printf("the temperature is %f centigrade\n",(f-32)*5/9.0);
}
void farenheit(float c){
    
    
    printf("the temperature is %f farenheit\n",(9/5.0)*c+32);
}