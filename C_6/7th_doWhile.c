#include <stdio.h>
int main(void) {
    int i=0;
    do {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시오.\n");
        scanf("%d", &i);
    }
    while(i<1||i>3); //세미콜론으로 종료시점을 알려줌
    printf("선택된 메뉴=%d\n",i);
    return 0;
}