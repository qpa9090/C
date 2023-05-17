#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>

int coin_toss(void);
int main(void) {
    int toss;
    int heads = 0;
    int tails = 0; 
    srand((unsigned)time(NULL)); //현재의 시각을 시드로 사용하여 값이 계속 달라지게함; 난수 생성
    for (toss = 0; toss < 100; toss++) { //동전을 100번 던지도록, coin_toss함수에서 나눈 값이 2로 떨어지지않는다면 동전앞면 ++
        if (coin_toss() == 1)
            heads++;
        else
            tails++; 
    }
    printf("동전의 앞면: %d \n", heads); 
    printf("동전의 뒷면: %d \n", tails); 
    return 0;
}

int coin_toss( void )
{
    int head = rand() % 2;
    return head;
}