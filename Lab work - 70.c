#include<stdio.h>
int main(){
    int age;
    printf("enter a person age:");
    scanf("%d",&age);
    if (age>=13&&age<=19){
        printf("teenager.\n");
    }else{
    printf("not teenager.\n");
    }
return 0;
}
