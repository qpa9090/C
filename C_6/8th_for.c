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