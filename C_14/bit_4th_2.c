#include <stdio.h>
int main(void) {
    printf("AND : %08X\n", 0x9 & 0xA); //and연산이 or연산보다 우선순위가 높다.&&
    printf("OR : %08X\n", 0x9 | 0xA); 
    printf("XOR : %08X\n", 0x9 ^ 0xA); 
    printf("NOT : %08X\n", ~0x9); 
    printf("<< : %08X\n", 0x4 << 1); 
    printf(">> : %08X\n", 0x4 >> 1);
    return 0; 
}