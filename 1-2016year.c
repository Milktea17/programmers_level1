/////////////////////////////////////////////
// 프로그래머스 level 1 : 2016년 
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *week[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};

char* solution(int a, int b) {

    char* answer = (char*)malloc(sizeof(char)*4);
    memset(answer,'\0',sizeof(char)*4);
    int w,i;
    w=0;
    
    for(i = 0; i < a-1 ; i++)
    {
        w+=month[i];
        printf("w:%d",w);
    }
    
    w+=b;
    w%=7;
    printf("w:%d",w);
    
    strcpy(answer,week[w]);
    
    return answer;
}