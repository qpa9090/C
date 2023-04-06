#include <stdio.h>
int main(void) {
    char op;
    int x, y, result;
    printf("수식을 입력하시오(예:2 + 5)>>");
    scanf("%d %c %d", &x, &op, &y);
    if(op == '+') {
        result = x+y;
    }
    else if(op == '-') {
        result = x-y;
    }
    else if(op == '*') {
        result = x*y;
    }
    else if(op == '/') {
        result = x/y;
    }
    else if(op == '%') {
        result = x-y;
    }
    else {
        printf("지원하지 않는 형식입니다.");
    }
    printf("%d", result);

    return 0;
}