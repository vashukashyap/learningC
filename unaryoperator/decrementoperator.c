#include<stdio.h>

int main(){
    int x=5, y;
    int a=5,b;

    y = --x; //pre-decrement
    b = a--; //post-decrement

    printf("x = %d\ny = %d\n",x,y);
    printf("a = %d \nb = %d",a,b);
}