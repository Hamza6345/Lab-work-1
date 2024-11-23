#include<stdio.h>
int main(){
    float basic_salary , HRA , DA ,gross_salary;
    printf("enter basic salary of employee:");
    scanf("%f",&basic_salary);
    if(basic_salary<=10000){
           HRA = basic_salary*0.20;
           DA = basic_salary*0.80;
    }else if (basic_salary<=20000){
        HRA = basic_salary*0.25;
        DA = basic_salary*0.90;
}else{
    HRA = basic_salary*0.30;
    DA = basic_salary*0.95;
}
   gross_salary = basic_salary + HRA + DA;
printf("Employee Gross Salary is :%.2f\n",gross_salary);
return 0;
}
