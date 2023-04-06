#include <stdio.h>
int main(void) {
    int n,i=0,a,b,sum=0;

    printf("텍스트 케이스 입력: ");
    scanf("%d", &n);

    while(i<n) {
        printf("값:");
        scanf("%d %d",&a, &b);
        sum=a+b;
        printf("%d\n", sum);
        i++;
    }
    return 0;
}