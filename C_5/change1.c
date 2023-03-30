#include <stdio.h>

int main(void) { //int,char,float들의 형변환 예
    char c;
    int i;
    float f;

    c=10000;
    i=1.23456+10;
    f=10+20;
    printf("c=%d, i=%d, f=%f \n", c, i, f);
    return 0;
}