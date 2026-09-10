#include<stdio.h>
int main(){
    int num1, num2, product;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    product = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, product);
    return 0;


}