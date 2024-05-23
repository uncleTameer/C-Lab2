#include<stdio.h>
int main(){
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    printf("\n");
    int num2=(num+1);
    int num3=(num+2);
    int num4=(num+3);
    int num5=(num+4);
    printf("Number   Square  Cube \n");
    printf("%d      %d      %d  \n",num,num*num,num*num*num);
    printf("%d      %d      %d  \n",num2,num2*num2,num2*num2*num2);
    printf("%d      %d      %d  \n",num3,num3*num3,num3*num3*num3);
    printf("%d      %d      %d  \n",num4,num4*num4,num4*num4*num4);
    printf("%d      %d      %d  \n",num5,num5*num5,num5*num5*num5);


    return 0;
}