#include <stdio.h>

int main(void) { //예제 1번
    int a;
    printf("정수를 입력하시오: ");
    scanf("%d", &a);
    a=a%2;
    if(a<1) {
        printf("입력된 정수는 짝수입니다.");
    }
    else {
        printf("입력된 정수는 홀수입니다.");
    }
    
    return 0;
}