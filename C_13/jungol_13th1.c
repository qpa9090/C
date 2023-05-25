#include <stdio.h>
int main(void) {
    int a=150, b=266,c=427,sum=0,count=0;

    char t[10]={0,};
    //scanf("%d %d %d",&a,&b,&c);
    sum=a*b*c;//17037300
    while(1) {
        count=sum%10;
        sum/=10;
        t[count]+=1;
        
        if(sum==0) {
            break;
        }
        
    }
    for(int i=0;i<=9;i++) {
            printf("%d\n",t[i]);
    }
    return 0;
}