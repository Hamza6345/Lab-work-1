
#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;
    printf("enter three angle of triangle:");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sum = angle1 + angle2 +angle3;
    if(sum  == 180 && angle1>0 && angle2>0 && angle3>0){
        printf("triangle is valid.\n");
    }else{
         printf("triangle is not valid.\n");
         }

return 0;
    }
