#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("enter three sides of the triangle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1==side2&&side2==side3){
        printf("triangle is equilateral.\n");
    }else if(side1==side2||side2==side3||side1==side3){
        printf("triangle is isosceles.\n");
    }
    else {
        printf("triangle is scalene triangle.\n");
    }
return 0;
}
