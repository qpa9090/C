# 7주차 실습

- 매개변수(전역변수, 지역변수)<br><br>
ex1
```c
#include <stdio.h>
int main(void) {
    int a=0,b=0;
    
    while(1) {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0) {
            break;
        }
        printf("%d\n",a+b);
    }
    return 0;
}
```
<br>ex2
```c
#include <stdio.h>

int max(int x, int y) { //if-else문보다 조건수식연산자 많이씀
    return x>y? x : y;
}

int main(void) {
    int x,y,larger;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    larger=max(x,y);
    printf("더 큰 값은 %d입니다. \n",larger);
    return 0;
}
```
<br>ex3
```c
#include <stdio.h>

void print_stars() {
    for(int i=0; i<30;i++) {
        printf("*");
    }
}

int main(void) {
    print_stars();
    printf("\nHello World!\n");
    print_stars();
    
    return 0;
}
```
