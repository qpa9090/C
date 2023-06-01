#include <stdio.h>
#include <string.h>

int main() { //https://www.jungol.co.kr/problem/2514?cursor=eyJwcm9ibGVtc2V0Ijo2LCJmaWVsZCI6NCwiaWR4IjoxfQ==
    char array[10001]; 
    int i,KOI=0,IOI=0;

    scanf("%s",array);

    for(i=0;i<strlen(array)-2;i++) { //strlen() 문자열의 길이를 알려주는 함수
        if(array[i]=='K'&&array[i+1]=='O'&&array[i+2]=='I')
            KOI++;
        else if(array[i]=='I'&&array[i+1]=='O'&&array[i+2]=='I')
            IOI++;
    }

    printf("%d\n%d",KOI, IOI);

    return 0;
}