#include<stdio.h>
int main(){
    printf("enter 'a': \n");
    int a;
    scanf("%d",&a);
    printf("enter 'b': \n");
    int b;
    scanf("%d",&b);
    printf("enter c \n");
    int c;
    scanf("%d",&c);
    int y;
    y=a*2+(b*b)+c;
    printf("y = a*2 + b^2 + c = (%d)*2 + (%d)^2 + %d = %d\n", a, b, c, y);
    return 0;
}