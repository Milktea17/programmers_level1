/////////////////////////////////////////////
// 프로그래머스 level 1 : 짝수와 홀수 
/////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(sizeof(char)*5);
    memset(answer,'\0',sizeof(char)*5);
    
    if((num == 0) || (num%2 == 0))
        strcat(answer,"Even");
    else
        strcat(answer,"Odd");
    
    return answer;
}