#include<stdio.h>
#include<math.h>

void squarearea(float s);
void circlearea(float r);
void rectanglearea(float a,float b);

int main(){
    float s,r,a,b;
    char x;
    printf("enter s for square,c for circle,r for rectangle\n");
    scanf("%c",&x);
    if(x=='s'){
        printf("enter the side\n");
        scanf("%f",&s);

        squarearea(s);

    }
    else if(x=='c'){
         printf("enter the radius");
         scanf("%f",&r);

        circlearea(r);
    }
    else if(x=='r'){
        printf("enter the sides of the rectangle:");
        scanf("%f",&a);
        scanf("%f",&b);
        rectanglearea(a,b);
    }
    return 0;
}
void squarearea(float s){ 
    printf("area of the square is %f",pow(s,2));
}
void circlearea(float r){  
    printf("area of the circle is %f",3.14*pow(r,2));
}
void rectanglearea(float a,float b){   
    printf("area of the rectangle is %f",a*b);
}

