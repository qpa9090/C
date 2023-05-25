#include <stdio.h>
int main() {
    int s,e;

    while(1) {
        scanf("%d %d",&s,&e);
        if((s<2||e<2)||(s>9||e>9)) {
            printf("INPUT ERROR!\n");
        }
        else{
            break;
        }
    }
    if(s<e) {
        for(int i=1;i<=9;i++) {
            for(int j=s;j<=e;j++) {
                printf("%d * %d = %2d",j,i,i*j);
            }
            printf("\n");
        }
    }
    else {
        for(int i=1;i<=9;i++) {
            for(int j=s;j>=e;j--) {
                printf("%d * %d = %2d",j,i,i*j);
            }
            printf("\n");
        }
    }
    
}
