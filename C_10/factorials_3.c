#include <stdio.h>
int factorial(int n) { //재귀함수 사용 factorial호출
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main(void) {
    int n;
    printf("수를 입력하세요: ");
    scanf("%d",&n);
    printf("%d",factorial(n));

    return 0;
}