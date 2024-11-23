#include<stdio.h>
int main(){
    float x , y;
    printf("enter x and y coordinates :");
    scanf("%f%f",&x,&y);
    if(x>0&&y>0){
        printf("first quadrant.\n");
    }else if(x<0&&y>0){
        printf("second quadrant.\n");

    }else if(x<0&&y<0){
        printf("third quadrant.\n");

    }else if(x>0&&y<0){
    printf("fourth quadrent.\n");
    }else if(x!=0&&y==0){
        printf("x-axis.\n");

    }else if(x==0&&y!=0){
    printf("y -axis.\n");

    }
    else{
        printf("origin.\n");
    }
  return 0;

    }













