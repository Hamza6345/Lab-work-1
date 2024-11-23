
#include <stdio.h>
#include <math.h>

int main() {
    int num1 , num2 , num3;
    int highest , lowest , difference;
    printf("Enter three numbers :");
    scanf("%d%d%d", &num1 , &num2 ,&num3);
    highest = num1;
    if (num2 > highest) highest = num2;
    if (num3 > highest) highest = num3;
    lowest = num1;
    if (num2 < lowest) lowest = num2;
    if (num3 < lowest) lowest = num3;
    difference = highest - lowest;
    printf("Difference between highest and lowest number is :%d\n",difference);
    return 0;
}
