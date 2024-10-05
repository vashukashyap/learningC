#include<stdio.h>
#include<stdbool.h>

int main(){
    bool a;

    printf("AND\n");
    a = (true && false);
    printf("true && false = %d\n",a);
    a = (false && true);
    printf("false && true = %d\n",a);
    a = (false && false);
    printf("false && false = %d\n",a);
    a = (true && true);
    printf("true && true = %d\n",a);

    printf("OR\n");
    a = (true || false);
    printf("true || false = %d\n",a);
    a = (false || true);
    printf("false || true = %d\n",a);
    a = (false || false);
    printf("false || false = %d\n",a);
    a = (true || true);
    printf("true || true = %d\n",a);

    printf("NOT\n");
    a = !true;
    printf("!true = %d\n",a);
    a = !false;
    printf("!false = %d\n",a);

    return 0;
}