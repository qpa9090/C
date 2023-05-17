#include <stdlib.h> 
#include <stdio.h>

int main(void) {
    system("dir"); //system함수 호출; 명령프롬포트에 dos명령어 전달
    printf("아무 키나 치세요\n"); 
    _getch();
    system("cls");
    return 0; 
}