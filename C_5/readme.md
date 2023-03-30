# 5주차 C언어 실습
- 형변환
- 연산자의 우선순위
- 제어문(조건문, 반복문)

마지막문제
```c
#include <stdio.h>
int main(void) {
    int a,b;

    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    if(a>b) {
        printf(">");
    }
    else if(a<b) {
        printf("<");
    }
    else {
        printf("==");
    }
    return 0;
}
```
