#include <math.h> //수학기호 라이브러리
#include <stdio.h>

int main(void) {
    double pi = 3.1415926535; 
    double x, y;

    x = pi / 2;
    y = sin( x ); //sin함수 호출
    printf( "sin( %f ) = %f\n", x, y ); 
    y = cos( x ); //cos함수 호출
    printf( "cos( %f ) = %f\n", x, y );
    return 0;
}