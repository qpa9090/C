# 4주차 c언어 실습
~~취소선~~
- 4주차실습
- 4주차복습
```c
#include <stdio.h>

int main(void) {
    double x,y,result;

    printf("두개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    result=x+y;         //덧셈 연산을 해서 결과를 result에 대입
    printf("%lf + %lf = %lf\n",x,y,result);
    result=x-y;
    printf("%lf - %lf = %lf\n",x,y,result);
    result=x*y;
    printf("%lf * %lf = %lf\n",x,y,result);
    result=x/y;
    printf("%lf / %lf = %lf\n",x,y,result);
    return 0;
}    
```
