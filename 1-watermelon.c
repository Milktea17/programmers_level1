/////////////////////////////////////////////
// 프로그래머스 level 1 : 수박수박수박수 
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*(3*n)); //한글은 2바이트
    int i;
    memset(answer,'\0',sizeof(char)*(3*n));

    for(i=0; i<n;i++)
    {
        if(i%2==0)
            strcat(answer,"수");
        else
            strcat(answer,"박");
   
   }
 
    return answer;
}