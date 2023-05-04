#include <stdio.h>

int get_integer() {
    int value;
    printf("정수를 입력하시오: ");
    scanf("%d", &value); 
    return value;
}

int add(int x, int y) {
    return x+y;
}
int minus(int x, int y) {
    return x-y;
}
int multi(int x, int y) {
    return x*y;
}
int div(int x, int y) {
    return x/y;
}

int main(void) {
    int x=get_integer();
    int y=get_integer();
    int sum=add(x,y);
    int min=minus(x,y);
    int mul=multi(x,y);
    int di=div(x,y);
    printf("두 수의 합은 %d입니다.\n",sum);//printf("합%d",add())
    printf("두 수의 차는 %d입니다.\n",min);
    printf("두 수의 곱은 %d입니다.\n",mul);
    printf("두 수의 나눗셈은 %d입니다.\n",di);
    return 0;
}