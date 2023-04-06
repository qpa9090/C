# 6주차 실습(while문,do_while문,for문)

- while문 예
```c
#include <stdio.h>
int main(void) {
    int i=1,result=0;

    while(i<=9) {
        printf("%d * %d = %d\n", 2,i,result=2*i);
        i++;
    }
    return 0;
}
```
- do_while문
```c
#include <stdio.h>
int main(void) {
    int i=0;
    do {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시오.\n");
        scanf("%d", &i);
    }
    while(i<1||i>3); //세미콜론으로 종료시점을 알려줌
    printf("선택된 메뉴=%d\n",i);
    return 0;
}
```
- for문 예
```c
#include <stdio.h>
int main(void) {
    int a,b,re,i;

    printf("구구단 단수 입력: ");
    scanf("%d", &a);

    for(i=1; i<10; i++) {
        re=a*i;
        printf("%d * %d = %d\n",a,i,re);
    }
    return 0;
}
```
