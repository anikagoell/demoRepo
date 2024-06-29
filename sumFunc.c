#include<stdio.h>
void sum(){
    int a,b;
    printf("enter the value of a= ");
    scanf("%d",&a);
    printf("enter the value of b= ");
    scanf("%d",&b);
    printf("the sum of %d and %d is %d",a,b,a+b);
}

int main(){
    sum();
}