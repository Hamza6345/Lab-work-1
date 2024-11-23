#include<stdio.h>
int main(){
    float income,tax;
    printf("enter a person income:");
    scanf("%f",&income);
    if (income<=1,50,000.0){
        tax = 0.00;
    }else if(income>1,50,001.0&&income<3,00,000.0){
        tax= (income - 1,50,000.0)*0.10;
    }else if(income>3,00,01.0&&income<5,00,000.0){
        tax= (income - 1,50,000.0)*0.20;
    }else{
    tax = (income -1,50,000.0)*0.30;
    }
    printf("total tax is :%.2f\n",tax);
return 0;
}
