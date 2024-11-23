#include<stdio.h>
int main(){
    int angle1,angle2,angle3,sum;
    printf("enter three angles of a triangle:");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum==180&&angle1>0&&angle2>0&&angle3>>0){
        printf("The angles from a valid triangle:%d\n");
    }else{
        printf("The angles from a valid triangle:%d\n");
    }
return 0;
}
