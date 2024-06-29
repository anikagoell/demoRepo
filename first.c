#include<stdio.h>
void main()
{
    printf("NAME; ANIKA GOEL ");
    printf("\nSTUDENT ID: 231602059 ");

int a,b,c;
printf("\nenter values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
a=a+b+c;
b=a-b-c;
c=a-b-c;
a=a-b-c;
printf("\nafter swapping their values are as below -");
printf("\n a= %d",a);
printf("\nb=%d",b);
printf("\nc= %d",c);
}
