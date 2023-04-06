#include <stdio.h>
int main(void) {
    int n,sum=0,i=0;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum+=i;
        i=i+2;
    }
    printf("1부터 %d까지의 짝수의 합은 %d", n,sum);
    
    return 0;
}