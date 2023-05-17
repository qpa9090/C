#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) //차가 이동한 거리를 *을 사용해 찍음
{
    int i;
    printf("CAR #%d:", car_number);
    for( i = 0; i < distance/10; i++ ) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    int i;
    int car1_dist=0, car2_dist=0;

    srand( (unsigned)time( NULL ) ); //난수발생

    for( i = 0; i < 6; i++ ) {
        car1_dist += rand() % 100; //난수 발생, 범위는 0~99까지
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);//차번호와 이동거리
        disp_car(2, car2_dist);
        printf("---------------------\n");
        _getch();
    }
    return 0;
}