#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start, end; // time_t는 unsigned long과 동일하다. 
    start = time(NULL); //1970년 1월 1일 이후의 시간을 초 단위로 반환
    printf("10초가 되면 아무 키나 누르세요\n");
    while (1) {
        if (getchar())
            break;
    }
    printf("종료되었습니다.\n");
    end = time(NULL);
    printf("경과된 시간은 %ld 초입니다. \n", end - start); //time_t가 unsigned long 타입이라 %ld로
    return 0;
}