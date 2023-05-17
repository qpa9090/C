#include <stdio.h>

int get_integer(void) { //미완성
    int n;
    int input_number,i,j,count=0;
    
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
    int n;
    n=get_integer();

    if(is_prime(n)==1) {
        printf("%d는 소수입니다.\n",n);
    }
    else {
        printf("%d는 소수가 아닙니다.\n",n);
    }
    return 0;
}