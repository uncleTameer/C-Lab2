#include<stdio.h>
int main(){
    float height,base;
    printf("enter base");
    scanf("%f",&base);
    printf("enter height");
    scanf("%f",&height);
    float area;
    area =(height*base)/2;
    printf("the triangle area is: %.3f.",area);
    return 0;
}