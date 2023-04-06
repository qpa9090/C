#include <stdio.h>
int main(void) {
    int i=1,result=0;

    while(i<=9) {
        printf("%d * %d = %d\n", 2,i,result=2*i);
        i++;
    }
    return 0;
}