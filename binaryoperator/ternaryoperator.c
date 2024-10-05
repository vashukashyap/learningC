#include<stdio.h>

int main(){
    int num1 , num2;

    printf("Enter two number:-");
    scanf("%d %d", &num1,&num2);

    printf("The largest number is %d", (num1>num2?num1 : num2));

    return 0;

}