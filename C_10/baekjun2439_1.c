#include <stdio.h>

int main(void) 
{ //별을 피라미드 형식으로 우측정렬
    int i, j, k, n;
    /*printf("입력하세요: ");
    scanf("%d",&n);*/
    for(i=1;i<=5;i++) 
    {
        for(k=1;k<=5-i;k++) 
        {
            printf(" ");
        }
        for(j=0;j<i;j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }

/* 처음부터 큰 피라미드형
for(i=5;i>0;i--) {
        for(j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }
*/

/* 위에서부터 아래로 출력은 숫자
for(i=5;i>0;i--) {
        for(j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
*/


/*
#include <stdio.h>

int main(){
	int n;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            if(j<n-i-1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/