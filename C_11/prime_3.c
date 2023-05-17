#include <stdio.h>

int get_integer(void) { //2~n까지 소수를 구함
    int n;
    printf("숫자를 입력하세요: ");
    scanf("%d",&n);
    return n;
}

int is_prime(int n) {
    int i;
    for(i=2;i<n;i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n, i;
    n = get_integer();
    printf("2부터 %d까지의 소수:\n", n);
    for(i=2; i<=n; i++) {
        if(is_prime(i)==1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
