/////////////////////////////////////////////
// 프로그래머스 level 1 : 직사각형 별찍기
/////////////////////////////////////////////

#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    int i,j;
    for(i=0;i<b;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    //printf("%d", a + b);
    return 0;
}