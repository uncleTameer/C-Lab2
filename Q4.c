#include<stdio.h>
int main(){
    printf("enter item's price please: \n");
    float price;
    scanf("%f",&price);
    float discount=price*0.85;
    printf("the original price was %f and the final price is: %.2f",price,discount);
    return 0;
}