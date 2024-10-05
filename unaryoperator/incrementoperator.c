#include<stdio.h>

int main(){
    int x=5, y;
    int a=5,b;

    y = ++x; //pre-increment
    b=a++; //post-increment

    printf("x = %d\ny = %d\n",x,y);
    printf("a = %d \nb = %d",a,b);
}